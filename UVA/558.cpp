#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=3000;
ll dist[N];
vector<vector<ll>> edges;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        edges.push_back({a,b,c});
    }
    for(int i=0;i<=n;i++)dist[i]=4e18;
    for(int i=1;i<=n-1;i++)
    {
        for(auto v:edges)
        {
            ll a=v[0],b=v[1],c=v[2];
            if(dist[b]>dist[a]+c)dist[b]=dist[a]+c;
        }
    }
    bool can=true;
    for(auto v:edges)
    {
        ll a=v[0],b=v[1],c=v[2];
        if(dist[b]>dist[a]+c)
        {
            can=false;
            break;
        }
    }
    if(!can)cout<<"possible"<<endl;
    else cout<<"not possible"<<endl;
    edges.clear();
}
int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    FIO
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
