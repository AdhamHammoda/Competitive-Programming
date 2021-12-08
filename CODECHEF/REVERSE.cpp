#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=2e5+5;
vector<pair<ll,ll>> adj[N];
ll dist[N],vis[N];
priority_queue<pair<ll,ll>> pq;
void dijkstra()
{
    dist[1]=0;
    pq.push({dist[1],1});
    while(!pq.empty())
    {
        ll u=pq.top().second;
        pq.pop();
        if(vis[u])continue;
        vis[u]=1;
        for(auto p:adj[u])
        {
            auto v=p.first,w=p.second;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                pq.push({-dist[v],v});
            }
        }
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)dist[i]=4e18;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back({v,0});
        adj[v].push_back({u,1});
    }
    dijkstra();
    if(dist[n]==4e18)cout<<-1;
    else cout<<dist[n];
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
