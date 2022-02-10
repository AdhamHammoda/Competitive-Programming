#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
const ll N=3e5+5;
vector<pair<ll,ll>> edges[N];
ll dp[N];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        edges[w].push_back({u,v});
    }
    ll ans=0;
    for(int i=1;i<N;i++)
    {
        vector<ll> tmp(edges[i].size());
        for(int j=0;j<edges[i].size();j++)
        {
            ll u=edges[i][j].first;
            ll v=edges[i][j].second;
            tmp[j]=max(dp[v],dp[u]+1);
        }
        for(int j=0;j<edges[i].size();j++)
        {
            ll u=edges[i][j].first;
            ll v=edges[i][j].second;
            dp[v]=max(dp[v],tmp[j]);
            ans=max(ans,dp[v]);
        }
    }
    cout<<ans;
}
int main()
{
    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}