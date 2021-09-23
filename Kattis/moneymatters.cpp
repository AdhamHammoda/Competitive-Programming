#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=1e5+7;
vector<ll> adj[N];
bool vis[N];
ll arr[N];
ll sum=0;
void dfs(ll u)
{
    sum+=arr[u];
    vis[u]=1;
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
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        a++,b++;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            sum=0;
            dfs(i);
            if(sum!=0)
            {
                cout<<"IMPOSSIBLE";
                return;
            }
        }
    }
    cout<<"POSSIBLE";
}
int main()
{
    FIO
    int t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
