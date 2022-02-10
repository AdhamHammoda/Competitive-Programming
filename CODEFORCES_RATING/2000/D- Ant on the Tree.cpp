#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
const ll N=305;
ll vis[N],par[N];
vector<ll> adj[N];
ll cur=1;
vector<ll> all;
void bfs(ll st,ll en)
{
    vis[st]=cur;
    par[st]=-1;
    queue<ll> q;
    q.push(st);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(vis[v]!=cur)vis[v]=cur,par[v]=u,q.push(v);
        }
    }
    deque<ll> tmpv;
    while(par[en]!=-1)
    {
        tmpv.push_front(en);
        en=par[en];
    }
    tmpv.push_front(st);
    for(auto x:tmpv)all.push_back(x);
    if(all.back()!=1)all.pop_back();
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll k=0;
    for(int i=2;i<=n;i++)k+=(adj[i].size()==1);
    vector<ll> leaves(k);
    for(int i=0;i<k;i++)cin>>leaves[i];
    bfs(1,leaves[0]);
    cur++;
    for(int i=1;i<k;i++)bfs(leaves[i-1],leaves[i]),cur++;
    cur++;
    bfs(leaves.back(),1);
    if(all.size()!=2*n-1)cout<<-1,exit(0);
    else for(auto x:all)cout<<x<<" ";
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