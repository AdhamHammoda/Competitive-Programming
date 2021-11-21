#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll N=2e5+7;
ll n,m,k;
set<ll> adj[N];
ll par[N],in[N];
bool vis[N];
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            par[v]=u;
            dfs(v);
            k-=(u==1);
        }
    }
}

void test_case()
{
    cin>>n>>m>>k;
    for (int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        in[u]++;
        in[v]++;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    if(in[1]<k)
    {
        cout<<"NO";
        return;
    }
    dfs(1);
    if(k>=0)
    {
        cout<<"YES"<<endl;
        for(auto x:adj[1])
        {
            if(!k)break;
            if(k>0 && par[x]!=1)
            {
                par[x]=1;
                k--;
            }
        }
        for(int i=2;i<=n;i++)
        {
            cout<<i<<" "<<par[i]<<endl;
        }
    }
    else cout<<"NO";
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
