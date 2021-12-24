#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
vector<ll> adj[N];
vector<ll> ans;
ll ind[N];
bool vis[N];
ll n,m,k;
void dfs(ll u)
{
    vis[u]=1;
    ans.push_back(u);
    ind[u]=ans.size();
    for(auto v:adj[u])
    {
        if(vis[v] && ans.size()-ind[v]>=k)
        {
            cout<<ans.size()-ind[v]+1<<endl;
            while(ans.back()!=v)cout<<ans.back()<<" ",ans.pop_back();
            cout<<v;
            exit(0);
        }
        if(!vis[v])dfs(v);
    }
    vis[u]=1;
    ans.pop_back();
}
void test_case()
{
    cin>>n>>m>>k;
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
            ans.clear();
            dfs(i);
        }
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}