#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
const ll N=6e4+5;
bool vis[N];
vector<ll> adj[N];
ll lst[N];
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            lst[v]=u;
            dfs(v);
        }
    }
}

void test_case()
{
    ll n,r1,r2;
    cin>>n>>r1>>r2;
    for(int i=1;i<=n;i++)
    {
        if(i==r1)continue;
        ll x;
        cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    dfs(r2);
    for(int i=1;i<=n;i++)
    {
        if(i==r2)continue;
        cout<<lst[i]<<" ";
    }

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