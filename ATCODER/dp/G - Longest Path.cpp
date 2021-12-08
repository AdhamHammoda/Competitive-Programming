#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=2e5+5;
vector<ll> adj[N];
ll dp[N];
ll solve(ll u)
{
    ll &ans=dp[u];
    if(~ans) return ans;
    ll op1=0;
    for(auto v:adj[u])
    {
        op1=max(op1,solve(v)+1);
    }
    return ans=op1;
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++)solve(i);
    ll ans=0;
    for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
    cout<<ans;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
