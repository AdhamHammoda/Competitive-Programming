#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll n,m,k,x,y,w;
const ll N=1005;
vector<pair<ll,ll>> adj[N];
ll dist[N][N];
vector<pair<ll,ll>>qu;
pair<pair<ll,ll>,ll> edges[N];
void dijkstra(ll src)
{
    dist[src][src]=0;
    priority_queue<pair<ll,ll>>pq;
    pq.push({0,src});
    while(!pq.empty())
    {
        ll u=pq.top().second,uc=-pq.top().first;
        pq.pop();
        if(dist[src][u]!=uc)continue;
        for(auto p:adj[u])
        {
            ll v=p.first,wt=p.second;
            if(dist[src][v]>dist[src][u]+wt)
            {
                dist[src][v]=dist[src][u]+wt;
                pq.push({-dist[src][v],v});
            }
        }
    }
}
void test_case()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
        edges[i]={{x,y},w};
    }
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        qu.push_back({x,y});
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    dist[i][j]=1e18;
    for(int i=1;i<=n;i++)dijkstra(i);
    ll ans=1e18;
    for(int i=0;i<m;i++)
    {
        ll u=edges[i].first.first;
        ll v=edges[i].first.second;
        ll w=edges[i].second;
        ll tmp=0;
        for(auto x:qu)
        {
            ll src=x.first,des=x.second;
            tmp+=min({dist[src][des],dist[src][u]+dist[v][des],
            dist[src][v]+dist[u][des]});
        }
        ans=min(ans,tmp);
    }
    cout<<ans;
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
