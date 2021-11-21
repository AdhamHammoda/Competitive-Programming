#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-26-2021 , 2:20 pm
ll n,m,u,v;
bool vis[200];
vector<ll> adj[200];
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])dfs(v);
    }
}
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll x=binpow(a,b/2);
    if(b%2)return x*x*a;
    else return x*x;
}
void test_case()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll cmp=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cmp++;
            dfs(i);
        }
    }
    cout<<binpow(2,n-cmp);
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
