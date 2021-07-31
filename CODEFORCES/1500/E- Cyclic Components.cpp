#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=2e5+5;
long double const ESP=1e-11;
vector<int> adj[N];
bool vis[N];
long long n,m,c,d,u,v;
bool cyc;
void dfs(int u)
{
    c++;
    d+=(adj[u].size()==2);
    vis[u]=1;

    for(auto v:adj[u])
    {
        if(!vis[v])
            dfs(v);
    }
}
int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
cin>>n>>m;
for(int i=0;i<m;i++)
{
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
long long ans=0;
for(int i=0;i<n;i++)
{
    c=0;
    d=0;
    if(!vis[i])
    {
        dfs(i);
    }
    if(c==d && c)
    {
        ans++;
    }
}
cout<<ans;
}
 