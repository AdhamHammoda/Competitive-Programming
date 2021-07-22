#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , graphs
/// 7-21-2021 , 10:48 pm
vector<ll> adj[200];
bool col[200];
bool vis[200];
ll c;
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            col[v]=!col[u];
            dfs(v);
        }
        if(col[u]==col[v])
        {
            c++;
        }
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    c/=2;
    c+=(n-c)%2;
    cout<<c;
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
