///       ______        __________                    _____   _____        _____
///      ///  \\\      ||__||   \\\    |||     |||  ||     || |||\\\      ///|||
///     ///    \\\     ||__||    \\\   |||_____|||  ||     || ||| \\\    /// |||
///    ///______\\\    ||__||     \\\  |||_____|||  ||     || |||  \\\  ///  |||
///   ///________\\\   ||__||     ///  |||_____|||  ||     || |||   \\\///   |||
///  ///          \\\  ||__||    ///   |||     |||  ||     || |||            |||
/// ///            \\\ ||__||___///    |||     |||  ||_____|| |||            |||

#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=2e5+7,OO=1e18;
ll n,m,u,v,w,comp,height; /// no. of nodes, no. of edges, from, to, weight, no. of connected components, height of graph
queue<ll>q; /// queue of bfs
vector<ll> adj[N]; /// unweighted
vector<pair<ll,ll>> adjedges[N]; /// weighted , node-weight
ll par[N],sz[N],lev[N],dist[N],col[N]; /// parent - size - level - distance - color
bool vis[N],stc[N]; /// visited - stack
bool cyc, bipartite; /// iscyclic - isbipartite
vector<ll> path,topsort; /// path - topological sort
pair<ll,pair<ll,ll>> edges[N]; /// edges array
ll alldistance[400][400]; /// floyd array
ll dfs(ll u, ll p) /// Depth First Search for undirected graphs
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(v!=p)
        {
            if(vis[v]) cyc++;
            else
            {
                col[v]=!col[u];
                height=max(height,1+dfs(v,u));
            }
            if(vis[v] && col[v]==col[u])
            bipartite = 0;
        }
    }
    return height;
}
ll dfs2(ll u, ll p) /// Depth First Search for directed graphs
{
    vis[u]=col[u]=stc[u]=1;
    for(auto v:adj[u])
    {
        if(v!=p)
        {
            if(stc[v])cyc++;
            if(!vis[v])
            {
                col[v]=!col[u];
                height=max(height,1+dfs2(v,u));
            }
            else if(col[v]==col[u])bipartite = 0;
        }
    }
    stc[u]=0;
    topsort.push_back(u);
    return height;
}
void bfs(ll start,ll dest) /// Breadth First Search
{
    q.push(start);
    lev[start]=0;
    par[start]=-1;
    col[start]=1;
    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for (auto v:adj[u])
        {
            if(lev[v]>lev[u]+1)
            {
                lev[v]=lev[u]+1;
                q.push(v);
                lev[v]=lev[u]+1;
                par[v] = u;
                col[v]=!col[u];
            }
        }
    }
    path.push_back(dest);
    ll node=dest;
    do
    {
        node=par[node];
        path.push_back(node);
    }
    while(node!=start);
    reverse(path.begin(),path.end());
}
void dijkstra(ll src,ll dest) /// Dijkstra source-destination shortest path
{
    priority_queue<pair<ll,ll>>pq;
    for(int i=1;i<=n;i++)dist[i]=OO;
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty())
    {
        ll a=pq.top().second, tmp=pq.top().first;
        pq.pop();
        if(dist[a]!=-tmp)continue;
        for(auto u:adjedges[a])
        {
            ll b=u.first,w=u.second;
            if(dist[a]+w<dist[b])
            {
                dist[b]=dist[a]+w;
                pq.push({-dist[b],b});
                par[b]=a;
            }
        }
    }
    if(dist[dest]!=OO)
    {
        path.push_back(dest);
        ll node=dest;
        do
        {
            node=par[node];
            path.push_back(node);
        }
        while(node!=src);
        reverse(path.begin(),path.end());
    }
}
ll findParent(int u) ///Disjoint Set Union path compression
{
    if(par[u]==u) return u;
    return par[u]=findParent(par[u]);
}
void join(int a, int b) ///Disjoint Set Union join
{
    a=findParent(a);
    b=findParent(b);
    if(a!=b)
    {
        par[b]=a;
        sz[a]+=sz[b];
    }
}
ll kruskal() /// Minimum Spanning Tree
{
    int ret=0;
    iota(par,par+n+1,0);
    sort(edges,edges+m);
    ll treecost=0;
    for(int i=0; i<m; i++)
    {
        auto x=edges[i];
        if(findParent(x.second.first)!=findParent(x.second.second))
        {
            join(x.second.first,x.second.second);
            treecost+=x.first;
        }
    }
    return treecost;
}
void floyd() ///All pairs shortest path
{
    for(int u=1;u<=n;u++)
        for(int v=1;v<=n;v++)
				alldistance[u][v]=OO;
	for(int k=1;k<=n;k++)
        for(int u=1;u<=n;u++)
			for(int v=1;v<=n;v++)
				alldistance[u][v] = min(alldistance[u][v], alldistance[u][k]+alldistance[k][v]);
}
void test_case()
{
    cin>>n>>m;
/**
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
     adj[u].push_back(v),adj[v].push_back(u);  /// weighted
     adjedges[u].push_back({v,w}),adjedges[v].push_back({u,w}); ///unweighted
    }
**/
/**
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
     edges[i]={w,{u,v}};   /// for kruskal
    }
*/
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
