#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
void test_case()
{
    pair<ll,ll> arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
        if(i)sum+=(arr[i].second - arr[i-1].second)*arr[i].first;
        else sum+=(arr[i].second * arr[i].first);
    }
    cout<<sum<<" miles"<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>n)
    {
        if(n==-1)return 0;
        test_case();
    }
}
