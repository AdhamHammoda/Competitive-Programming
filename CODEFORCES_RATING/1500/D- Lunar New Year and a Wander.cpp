#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
bool vis[N];
set<ll> adj[N];
void bfs(ll st)
{
    priority_queue<ll> pq;
    pq.push(-st);
    vis[st]=1;
    while(!pq.empty())
    {
        ll u=pq.top();
        pq.pop();
        u=-u;
        cout<<u<<" ";
        for(auto v:adj[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                pq.push(-v);
            }
        }
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    bfs(1);
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