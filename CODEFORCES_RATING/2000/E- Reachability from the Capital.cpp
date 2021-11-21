#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=1e5;
vector<ll> adj[N];
bool vis[N];
vector<ll> topsort;
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])dfs(v);
    }
    topsort.push_back(u);
}
void test_case()
{
    ll n,m,cap;
    cin>>n>>m>>cap;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])dfs(i);
    }
    dfs(cap);
    ll c=0;
    reverse(topsort.begin(),topsort.end());
    for(int i=0;i<=n;i++)vis[i]=0;
    for(auto x:topsort)
    {
        if(!vis[x])
        {
            if(x!=cap)c++;
            dfs(x);
        }
    }
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
