#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
const ll N = 2e5+5;
ll par[N],sz[N],n,m;
vector<pair<ll,pair<ll,ll>>> edges;
ll findParent(ll u)
{
    if(par[u]==u)return u;
    return par[u]=findParent(par[u]);
}
bool join(ll a,ll b)
{
    a=findParent(a);
    b=findParent(b);
    if(a==b)return false;
    if(sz[a]>sz[b])sz[a]+=sz[b],par[b]=a;
    else sz[b]+=sz[a],par[a]=b;
    return true;
}
ll kruskal()
{
    ll ans=0;
    for(int i=1;i<=n;i++)par[i]=i,sz[i]=1;
    sort(edges.begin(),edges.end());
    for(int i=0;i<m;++i)
    {
        ll j=i;
        while(edges[i].first==edges[j].first && j<m)j++;
        ll c=j-i;
        for(int k=i;k<j;k++)
        {
            ll node1=edges[k].second.first;
            ll node2=edges[k].second.second;
            c-=(findParent(node1)==findParent(node2));
        }
        for(int k=i;k<j;k++)
        {
            ll node1=edges[k].second.first;
            ll node2=edges[k].second.second;
            c-=join(node1,node2);
        }
        ans+=c;
        i=j-1;
    }
    return ans;
}
void test_case()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        edges.push_back({w,{x,y}});
    }
    cout<<kruskal();
}
int main()
{
//    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
