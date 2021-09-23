#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll cyc=0;
const ll N=1e6+5;
vector<ll> adj[N];
bool vis[N],stc[N];
vector<ll>topsort;
void dfs(ll u)
{
    vis[u]=1;
    stc[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
        else if(stc[v])cyc++;
    }
    topsort.push_back(u);
    stc[u]=0;
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])dfs(i);
    }
    if(cyc)
    {
        cout<<"IMPOSSIBLE";
        return;
    }
    reverse(topsort.begin(),topsort.end());
    for(auto x:topsort)cout<<x<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
