#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
vector<ll> adj[N];
ll dp[N][4];
void dfs(ll u,ll p)
{
    if(p!=1)dp[u][1]=1;
    dp[u][3]=1e18;
    bool have=false;
    for(auto v:adj[u])
    {
        if(v!=p)
        {
            have=true;
            dfs(v,u);
            dp[u][1]+=min(dp[v][1],dp[v][2]);
            dp[u][2]+=min(dp[v][1],dp[v][3]);
        }
    }
    if(have)
    {
        for(auto v:adj[u])
        {
            dp[u][3]=min(dp[u][3],dp[u][2]-min(dp[v][1],dp[v][3])+dp[v][1]);
        }
    }
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans=0;
    for(auto v:adj[1])
    {
        dfs(v,1);
        ans+=dp[v][1];
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
