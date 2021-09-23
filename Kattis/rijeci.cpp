#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    pair<ll,ll> arr[n+1];
    arr[0]={1,0};
    for(int i=1;i<=n;i++)
    {
        ll a=arr[i-1].first;
        ll b=arr[i-1].second;
        arr[i]={b,a+b};
    }
    cout<<arr[n].first<<" "<<arr[n].second;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
