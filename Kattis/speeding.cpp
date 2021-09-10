#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    pair<ll,ll> arr[n];
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
        if(!i)continue;
        pair<ll,ll> p1=arr[i];
        pair<ll,ll> p2=arr[i-1];
        mx=max(mx,(p1.second-p2.second)/(p1.first-p2.first));
    }
    cout<<mx;
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
