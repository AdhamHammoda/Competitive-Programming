#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
set<ll> leafs;
vector<ll> adj[N];
ll cats[N];
ll n,k;
bool vis[N];
void bfs(ll st)
{
    queue<ll>q;
    q.push(st);
    vis[st]=1;
    while(!q.empty())
    {
        auto u=q.front();
        q.pop();
        bool tam=false;
        for(auto v:adj[u])
        {
            if(cats[v]+cats[u]<=k && !vis[v])
            {
                tam=true;
                if(cats[v])cats[v]+=cats[u];;
                vis[v]=1;
                q.push(v);
            }
        }
        if(!tam && adj[u].size()==1 && u!=1)leafs.insert(u);
    }
}
void test_case()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>cats[i];
    for(int i=0;i<n-1;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    cout<<leafs.size();
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}