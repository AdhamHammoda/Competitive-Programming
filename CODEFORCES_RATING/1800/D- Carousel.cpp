#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=2e5+5;
vector<ll> adj[N];
ll vis[N],col[N],mxcolor=1;
void bfs(ll st)
{
    vis[st]=1;
    col[st]=1;
    queue<ll>q;
    q.push(st);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(col[v]==col[u])
            {
                col[v]=col[u]+1;
                mxcolor=max(col[v],mxcolor);
            }
            if(!vis[v])
            {
                vis[v]=1;
                q.push(v);
            }
        }
    }
}
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    mxcolor=1;
    for(int i=0;i<n;i++)
    {
        vis[i]=0;
        col[i]=1;
        adj[i].clear();
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[(i+1)%n])
        {
            adj[i].push_back((i+1)%n);
            adj[(i+1)%n].push_back(i);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])bfs(i);
    }
    cout<<mxcolor<<endl;
    for(int i=0;i<n;i++)cout<<col[i]<<" ";
    cout<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
