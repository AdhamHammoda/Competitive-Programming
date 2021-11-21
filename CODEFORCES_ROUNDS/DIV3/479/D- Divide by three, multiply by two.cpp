#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
ll vis[N];
vector<ll> adj[N],topsort;
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])dfs(v);
    }
    topsort.push_back(u);
}
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                if(arr[i]==2*arr[j] || arr[j]==3*arr[i])adj[i].push_back(j);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])dfs(i);
    }
    for(auto x:topsort)cout<<arr[x]<<" ";
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
