#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
set<ll> adj[N];
bool vis[N];
vector<ll> sz(N,1),topsort,ind(N);
void dfs(ll u)
{
    vis[u]=1;
    topsort.push_back(u);
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            dfs(v);
            sz[u]+=sz[v];
        }
    }
}
void test_case()
{
    ll n,q;
    cin>>n>>q;
    for(int i=2;i<=n;i++)
    {
        ll u;
        cin>>u;
        adj[u].insert(i);
    }
    dfs(1);
    for(int i=0;i<topsort.size();i++)ind[topsort[i]]=i;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        if(y>sz[x])cout<<-1<<endl;
        else cout<<topsort[ind[x]+y-1]<<endl;
    }
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
