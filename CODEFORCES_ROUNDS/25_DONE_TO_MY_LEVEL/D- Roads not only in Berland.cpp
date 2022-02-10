#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n;
const ll N=1e4+4;
ll par[N];
ll findparent(ll u)
{
    if(par[u]==u)return u;
    return par[u]=findparent(par[u]);
}
void join(ll a,ll b)
{
    a=findparent(a),b=findparent(b);
    if(a!=b)par[b]=a;
}
void test_case()
{
    cin>>n;
    for(int i=1;i<=n;i++)par[i]=i;
    vector<pair<ll,ll>> ans;
    for(int i=0;i<n-1;i++)
    {
        ll u,v;
        cin>>u>>v;
        if(findparent(u)==findparent(v))ans.push_back({u,v});
        else join(u,v);
    }
    set<ll> s;
    for(int i=1;i<=n;i++)s.insert(findparent(i));
    cout<<ans.size()<<endl;
    for(auto p:ans)
    {
        cout<<p.first<<" "<<p.second<<" "<<(*s.begin())<<" ";
        s.erase(s.begin());
        cout<<(*s.begin())<<endl;
    }

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