#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N = 2e5 + 7;
set<ll> adj[N];
ll skill[N];
void test_case()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
        skill[i]=a;
    }
    sort(v.begin(),v.end());
    while(k--)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    for(int i=1;i<=n;i++)
    {
        ll it1=lower_bound(v.begin(),v.end(),skill[i])-v.begin();
        ll y=it1;
        for(auto x:adj[i])
        {
            ll it2=lower_bound(v.begin(),v.end(),skill[x])-v.begin();
            if(it2<it1)y--;
        }
        cout<<y<<" ";
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
