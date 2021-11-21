#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll N=2e5+7;
vector<ll> adj[N];
bool vis[N];
ll lev[N];
void bfs(ll st)
{
    queue<ll>q;
    q.push(st);
    vis[st]=1;
    lev[st]=0;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                q.push(v);
                lev[v]=lev[u]+1;
            }
        }
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    set<ll> even,odd;
    for(int i=1;i<=n;i++)
    {
        vis[i]=0,adj[i].clear();
        lev[i]%2?odd.insert(i):even.insert(i);
    }
    if(odd.size()>even.size())
    {
        cout<<even.size()<<endl;
        for(auto x:even)cout<<x<<" ";
        cout<<endl;
    }
    else
    {
        cout<<odd.size()<<endl;
        for(auto x:odd)cout<<x<<" ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)lev[i]=0;
}
int main()
{
    //    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}