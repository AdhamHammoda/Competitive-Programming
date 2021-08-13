#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
const ll N =200007;
bool vis[N];
ll ind[N],c[N];
vector<ll> adj[N],topsort;
void dfs(ll u)
{
    vis[u]=1;
    topsort.push_back(u);
    ind[u]=topsort.size()-1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            c[v]++;
            dfs(v);
            c[u]+=c[v];
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
        adj[u].push_back(i);
    }
    c[1]=1;
    dfs(1);
    while(q--)
    {
        ll u,k;
        cin>>u>>k;
        if(k>c[u])
        {
            cout<<-1<<endl;
        }
        else cout<<topsort[ind[u]+k-1]<<endl;
    }
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
