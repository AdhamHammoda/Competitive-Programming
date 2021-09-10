#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,k;
    cin>>a>>b>>k;
    map<ll,ll> boy;
    map<ll,ll> girl;
    vector<pair<ll,ll>>v(k);
    for(int i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        v[i].first=x;
    }
    for(int i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        v[i].second=x;
    }
    for(auto p:v)
    {
        boy[p.first]++;
        girl[p.second]++;
    }
    ll ans=0;
    for(auto p:v)ans+=k-boy[p.first]-girl[p.second]+1;
    cout<<ans/2<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
    //    t=1;
    while(t--)
    {
        test_case();
    }
}
