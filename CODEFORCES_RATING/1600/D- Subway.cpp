#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=2e5+5;
vector<ll> adj[N];
ll cur=1,dest=1,vv=1;
ll vis[N],lev[N],par[N],ind[N];
bool can=false;
void dfs(ll u)
{
    vis[u]=vv;
    for(auto v:adj[u])
    {
        if(vis[v]!=vv)par[v]=u,ind[v]=ind[u]+1,dfs(v);
        else if(vis[v]==vv && v==cur && ind[u]>=2)
        {
            can=true;
            while(u!=-1)lev[u]=0,u=par[u];
            return;
        }
    }
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v),adj[v].push_back(u);
    }
    vector<ll> v;
    for(int i=1;i<=n;i++)lev[i]=1e18;
    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()<2)continue;
        vv++,cur=i,can=false;
        par[cur]=-1,ind[cur]=0,dfs(cur);
        if(can)break;
    }
    queue<ll> q;
    for(int i=1;i<=n;i++)if(!lev[i])q.push(i);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(lev[v]>lev[u]+1)lev[v]=lev[u]+1,q.push(v);
        }
    }
    for(int i=1;i<=n;i++)cout<<lev[i]<<" ";
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}