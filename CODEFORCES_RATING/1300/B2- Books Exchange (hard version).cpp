#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N=2e5+7;
ll par[N],sz[N];
ll findParent(ll u)
{
    if(par[u]==u) return u;
    return par[u]=findParent(par[u]);
}
void join(ll a,ll b)
{
    a=findParent(a);
    b=findParent(b);
    if(a!=b)
    {
        par[b]=a;
        sz[a]+=sz[b];
    }
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sz[i]=1;
        par[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        ll u;
        cin>>u;
        join(i,u);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<sz[findParent(i)]<<" ";
    }
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
