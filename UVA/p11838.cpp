#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=2005;
ll c=0,cur=0;;
ll vis[N];
vector<ll> adj[N];
void dfs(ll u)
{
    c++;
    vis[u]=cur;
    for(auto v:adj[u])
    {
        if(vis[v]!=cur)
        {
            dfs(v);
        }
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    if(!n && !m)exit(0);
    for(int i=1;i<=n;i++)adj[i].clear();
    for(int i=0;i<m;i++)
    {
        ll u,v,p;
        cin>>u>>v>>p;
        adj[u].push_back(v);
        if(p==2)adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        c=0;
        cur++;
        dfs(i);
        if(c!=n)
        {
            cout<<0<<endl;
            return;
        }
    }
    cout<<1<<endl;
    return;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(true)
    {
        test_case();
    }
}
