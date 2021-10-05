#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=2e5+5;
vector<ll> adj[N];
bool col[N],vis[N],bip=1;
ll par[N];
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])col[v]=!col[u],dfs(v);
        else if(col[v]==col[u])bip=false;
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i].first>>v[i].second;
        adj[v[i].first].push_back(v[i].second);
        adj[v[i].second].push_back(v[i].first);
    }
    for(int i=1;i<=n;i++)if(!vis[i])dfs(i);
    if(!bip)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(auto x:v)cout<<(col[x.first]>col[x.second]);
    }
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
