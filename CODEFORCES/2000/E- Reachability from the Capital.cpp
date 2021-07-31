#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N=1e6;
ll cap;
bool vis[N];
vector<ll> adj[N];
vector<ll>topsort;
ll c=0;
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
            dfs(v);
    }
    topsort.push_back(u);
}
int main()
{
    ll n,m;
    cin>>n>>m>>cap;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }
    for(int i=1;i<=n;i++)vis[i]=0;
    reverse(topsort.begin(),topsort.end());
    dfs(cap);
    c++;
    for(int i=0;i<topsort.size();i++)
    {
        if(!vis[topsort[i]])
        {
            c++;
            dfs(topsort[i]);
        }
    }
    cout<<c-1;
}