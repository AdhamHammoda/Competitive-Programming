#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
const ll N = 2e5+5;
ll par[N],sz[N],n,m,rating[N];
multiset<pair<ll,pair<ll,ll>>> edges;
multiset<pair<ll,pair<ll,ll>>> edges2;
multiset<ll> allcost;
set<ll> tam[N];
ll findParent(ll u)
{
    if(par[u]==u)return u;
    return par[u]=findParent(par[u]);
}
void join(ll a,ll b)
{
    a=findParent(a);
    b=findParent(b);
    if(a!=b)
    {
        par[b]=a;
    }
}
ll kruskal()
{
    for(int i=1;i<=n;i++)par[i]=1;
    ll ret=0;
    for(auto x:edges)
    {
        if(findParent(x.second.second)!=findParent(x.second.first))
        {
            join(x.second.second,x.second.first);
            ret+=x.first;
            allcost.insert(x.first);
            tam[x.second.first].insert(x.first);
            tam[x.second.second].insert(x.first);
            edges2.erase({x.first,{x.second.first,x.second.second}});
        }
    }
    return ret;
}
void test_case()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        edges.insert({w,{x,y}});
        edges2.insert({w,{x,y}});
    }
    kruskal();
    ll c=0;
    for(auto x:edges2)
    {
        if(allcost.find(x.first)!=allcost.end())
        {
            if(tam[x.second.first].find(x.first)!=tam[x.second.first].end()
            || tam[x.second.second].find(x.first)!=tam[x.second.second].end())c++;
        }
    }
    cout<<c;
}
int main()
{
    FIO
    ll t;
    t = 1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
