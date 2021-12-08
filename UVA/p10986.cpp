#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=20005;
ll j=0;
ll n,m;
ll dist[N];
bool vis[N];
vector<pair<ll,ll>>adj[N];
ll dijkstra(ll src,ll dest)
{
    for(int i=0;i<n;i++)dist[i]=4e18,vis[i]=0;
    dist[src]=0;
    priority_queue<pair<ll,ll>>pq;
    pq.push({dist[src],src});
    while(!pq.empty())
    {
        ll u=pq.top().second;
        ll d=-pq.top().first;
        pq.pop();
        if(vis[u])continue;
        vis[u]=true;
        for(auto p:adj[u])
        {
            auto v=p.first,w=p.second;
            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                pq.push({-dist[v],v});
            }
        }
    }
    return dist[dest];
}
void test_case()
{
    ll src=0,dest=0;
    j++;
    cin>>n>>m>>src>>dest;
    for(int i=0;i<n;i++)adj[i].clear();
    for(int i=0;i<m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    ll ans=dijkstra(src,dest);
    cout<<"Case #"<<j<<": ";
    if(ans==4e18)cout<<"unreachable";
    else cout<<ans;
    cout<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
