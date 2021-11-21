#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-21-2021 , 7:43 pm
set<ll> adj[200];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    ll c=0;
    while(true)
    {
        bool don=false;
        set<ll> s;
        for(int i=1;i<=n;i++)
        {
            if(adj[i].size()==1)
            {
                s.insert(i);
                don=true;
            }
        }
        for(auto x:s)
        {
              adj[*adj[x].begin()].erase(x);
              adj[x].clear();
        }
        if(!don)
        {
            cout<<c;
            return;
        }
        c++;
    }
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
