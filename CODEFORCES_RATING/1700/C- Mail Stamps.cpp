#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
map<ll,vector<ll>>adj;
map<ll,bool>vis;
void dfs(ll u)
{
    cout<<u<<" ";
    vis[u]=1;
    for(auto v:adj[u])if(!vis[v])dfs(v);
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(auto x:adj)
    {
        if(adj[x.first].size()==1)dfs(x.first),exit(0);
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}