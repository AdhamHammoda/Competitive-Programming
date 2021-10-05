#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>m;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        mx=max(mx,m[arr[i]]);
    }
    ll ans=1e18;
    set<ll> ms;
    for(auto x:m)ms.insert(x.second);
    for(auto x:ms)
    {
        ll sum=0;
        for(auto y:m)
        {
            if(y.second<x)sum+=y.second;
            else sum+=abs(x-y.second);
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
