#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
vector<ll> adj[N];
bool vis[N];
ll f[N],g[N];
ll d;
void dfs(ll u,ll p)
{
    deque<ll> allf;
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(v!=p)
        {
            dfs(v,u);
            f[u]=max(f[u],f[v]+1);
            if(allf.size()==2)
            {
                ll mn=min(allf.back(),allf.front());
                if(f[v]>mn)
                {
                    if(mn==allf.back())allf.pop_back();
                    else allf.pop_front();
                }
            }
            allf.push_back(f[v]);
        }
    }
    d=max(d,f[u]);
    sort(allf.begin(),allf.end());
    if(allf.size()>=2)g[u]=2+allf.back()+allf[allf.size()-2],d=max(d,g[u]);
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
    dfs(1,-1);
    cout<<d;

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
