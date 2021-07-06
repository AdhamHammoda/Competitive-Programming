#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// graphs
/// 7-4-2021 , 9:06 pm
const ll N=1e5+7;
vector<ll> adj[N];
bool vis[N];
vector<ll> topsort;
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v]) dfs(v);
    }
    topsort.push_back(u);
}
void test_case()
{
    ll n,m;
    while(cin>>n>>m)
    {
        if(!n && !m)break;
        for(int i=0;i<m;i++)
        {
            ll u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
        reverse(topsort.begin(),topsort.end());
        for(auto x:topsort)cout<<x<<" ";
        cout<<endl;
        topsort.clear();
        for(int i=1;i<=n;i++)
        {
            vis[i]=0;
            adj[i].clear();
        }
    }
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
