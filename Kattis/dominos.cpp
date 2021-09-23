#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=1e5+5;
vector<ll> adj[N];
bool vis[N],vis2[N];
vector<ll>topsort;
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
    topsort.push_back(u);
}
void dfs2(ll u)
{
    vis2[u]=1;
    for(auto v:adj[u])
    {
        if(!vis2[v])
        {
            dfs2(v);
        }
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])dfs(i);
    }
    ll c=0;
    reverse(topsort.begin(),topsort.end());
    for(auto x:topsort)
    {
        if(!vis2[x])
        {
            c++;
            dfs2(x);
        }
    }
    cout<<c<<endl;
    for(int i=1;i<=n;i++)adj[i].clear(),vis[i]=vis2[i]=0;
    topsort.clear();
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
