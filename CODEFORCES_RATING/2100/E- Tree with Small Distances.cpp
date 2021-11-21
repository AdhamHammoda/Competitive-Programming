#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
vector<ll> adj[N];
queue<ll>q;
ll lev[N],par[N];
void bfs(ll st)
{
    lev[st]=0;
    q.push(st);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(lev[v]>lev[u]+1)
            {
                par[v]=u;
                lev[v]=lev[u]+1;
                q.push(v);
            }
        }
    }
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        lev[i]=4e18;
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    set<pair<ll,ll>>s;
    for(int i=2;i<=n;i++)
    {
        if(lev[i]>2)s.insert({-lev[i],i});
    }
    ll c=0;
    while(!s.empty())
    {
        auto it=*s.begin();
        ll u=par[it.second];
        c++;
        for(auto v:adj[u])
        {
            if(s.find({-lev[v],v})!=s.end())s.erase({-lev[v],v});
        }
        s.erase({-lev[u],u});
    }
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
