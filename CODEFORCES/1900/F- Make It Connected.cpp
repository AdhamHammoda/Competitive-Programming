#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
const ll N = 2e5+5;
ll par[N],sz[N],n,m,rating[N];
multiset<pair<ll,pair<ll,ll>>> edges;
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
    ll ret=0;
    for(auto x:edges)
    {
        if(findParent(x.second.second)!=findParent(x.second.first))
        {
            join(x.second.second,x.second.first);
            ret+=x.first;
        }
    }
    return ret;
}
void test_case()
{
    cin>>n>>m;
    ll minnode=0;
    ll minrating=1e18;
    for(int i=1;i<=n;i++)
    {
        sz[i]=1;
        par[i]=i;
        cin>>rating[i];
        if(rating[i]<minrating)
        {
            minrating=rating[i];
            minnode=i;
        }
    }
    for(int i=1;i<=m;i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        edges.insert({w,{x,y}});
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=minnode)
        {
            edges.insert({rating[i]+minrating,{minnode,i}});
        }
    }
    cout<<kruskal();
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
