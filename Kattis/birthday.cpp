///       ______        __________                    _____   _____        _____
///      ///  \\\      ||__||   \\\    |||     |||  ||     || |||\\\      ///|||
///     ///    \\\     ||__||    \\\   |||_____|||  ||     || ||| \\\    /// |||
///    ///______\\\    ||__||     \\\  |||_____|||  ||     || |||  \\\  ///  |||
///   ///________\\\   ||__||     ///  |||_____|||  ||     || |||   \\\///   |||
///  ///          \\\  ||__||    ///   |||     |||  ||     || |||            |||
/// ///            \\\ ||__||___///    |||     |||  ||_____|| |||            |||

#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=1e5+5;
set<ll>adj[N];
ll vis[N];
ll n,m;
ll c=0;
ll cur=2;
void dfs(ll u)
{
    c++;
    vis[u]=cur;
    for(auto v:adj[u])if(vis[v]!=cur)dfs(v);
}
void test_case()
{
    for(int i=0;i<n;i++)adj[i].clear();
    vector<pair<ll,ll>> edges(m);
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
        edges[i]={u,v};
    }
    for(auto p:edges)
    {
        adj[p.first].erase(p.second);
        adj[p.second].erase(p.first);
        c=0;
        cur++;
        dfs(0);
        if(c!=n)
        {
            cout<<"Yes"<<endl;
            return;
        }
        adj[p.first].insert(p.second);
        adj[p.second].insert(p.first);
    }
    cout<<"No"<<endl;
}
int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(cin>>n>>m)
    {
        if(!n && !m)break;
        test_case();
    }
}
