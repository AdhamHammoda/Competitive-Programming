#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=1e5+5, M=17+5, MOD=998244353, OO=0x3f3f3f3f;
long double const ESP=1e-11;
vector<int> adj[N];
bool vis[N];
vector<long long>topsort,v(N);
void dfs(int u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
            dfs(v);
    }
    topsort.push_back(v[u]);
}
int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
ll n,k;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i!=j)
        {
            if(v[i]==2*v[j] || 3*v[i]==v[j])adj[i].push_back(j);
        }
    }
}
for(int i=0;i<n;i++)
{
    if(!vis[i])
        dfs(i);
}
for(auto g:topsort)cout<<g<<" ";
}
 