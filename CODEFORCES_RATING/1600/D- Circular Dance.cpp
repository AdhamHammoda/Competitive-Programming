#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
const ll N = 2e5 + 5;
bool vis[N];
vector<ll> topsort;
vector<ll> adj[N];
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
    ll n;
    cin>>n;
    set<pair<ll,ll>>s;
    set<pair<ll,ll>>ans;
    for(int i=1;i<=n;i++)
    {
        ll u,v;
        cin>>u>>v;
        if(s.find({u,v})!=s.end())ans.insert({u,v});
        if(s.find({v,u})!=s.end())ans.insert({v,u});
        if(s.find({i,v})!=s.end())ans.insert({i,v});
        if(s.find({i,u})!=s.end())ans.insert({i,u});
        if(s.find({u,v})==s.end())s.insert({u,v});
        if(s.find({v,u})==s.end())s.insert({v,u});
        if(s.find({i,v})==s.end())s.insert({i,v});
        if(s.find({i,u})==s.end())s.insert({i,u});
    }
    for(auto x:ans)
    {
        adj[x.first].push_back(x.second);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])dfs(i);
    }
    reverse(topsort.begin(),topsort.end());
    for(auto x:topsort)cout<<x<<" ";
}

int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}