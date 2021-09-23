#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=1e5+5;
vector<ll> adj[N];
bool vis[N];
ll c=0;
void dfs(ll u)
{
    vis[u]=1;
    c++;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}
void test_case()
{
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    ll ans=0;
    while(k--)
    {
        ll a;
        cin>>a;
        if(vis[a])continue;
        c=0;
        dfs(a);
        ans+=c;
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++)adj[i].clear(),vis[i]=0;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
