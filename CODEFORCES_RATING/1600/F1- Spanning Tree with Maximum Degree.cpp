#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll N=2e5+7;
ll n,m;
vector<ll> adj[N];
queue<ll> q;
ll par[N],in[N];
bool vis[N],vis2[N];
void bfs(ll st)
{
    q.push(st);
    vis[st]=true;
    par[st]=-1;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(!vis[v])
            {
                vis[v]=true;
                q.push(v);
                par[v]=u;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        in[u]++;
        in[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    priority_queue<pair<ll,ll>>mxindegree;
    for(int i=1;i<=n;i++)
    {
        mxindegree.push({in[i],i});
    }
    int x=mxindegree.top().second;
    bfs(x);
    vis2[x]=1;
    for(auto y:adj[x])
    {
        cout<<x<<" "<<y<<endl;
        vis2[y]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis2[i])
        cout<<i<<" "<<par[i]<<endl;
    }
}