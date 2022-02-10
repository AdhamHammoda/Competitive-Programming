#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
ll num[N],gc[N];
vector<ll> adj[N];
set<ll> ans[N];
void dfs(ll u,ll p)
{
    ans[u].insert(gc[p]);
    for(auto x:ans[p])ans[u].insert(__gcd(x,num[u]));
    gc[u]=__gcd(gc[p],num[u]);
    for(auto v:adj[u])
    {
        if(v!=p)dfs(v,u);
    }
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>num[i];
    for(int i=0;i<n-1;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ans[0].insert(0);
    dfs(1,0);
    for(int i=1;i<=n;i++)cout<<*(ans[i].rbegin())<<" ";
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}