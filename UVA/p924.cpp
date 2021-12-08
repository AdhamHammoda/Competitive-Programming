#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,m;
const ll N=3000;
vector<ll> adj[N];
queue<ll> q;
ll lev[N];
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
                lev[v]=lev[u]+1;
                q.push(v);
            }
        }
    }
}
void test_case()
{
    for(int i=0;i<n;i++)lev[i]=4e18;
    ll a;
    cin>>a;
    bfs(a);
    map<ll,ll>m;
    ll mx=0,mxi=0;
    for(int i=0;i<n;i++)
    {
        if(lev[i]!=4e18 && lev[i])m[lev[i]]++;
    }
    for(auto x:m)
    {
        if(mx<x.second)mx=x.second,mxi=x.first;
    }
    if(mx==0)cout<<0<<endl;
    else cout<<mx<<" "<<mxi<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        for(int j=0;j<m;j++)
        {
            ll a;
            cin>>a;
            adj[i].push_back(a);
        }
    }
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
