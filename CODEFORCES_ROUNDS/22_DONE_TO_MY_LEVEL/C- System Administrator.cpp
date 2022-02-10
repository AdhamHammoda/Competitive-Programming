#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=1e5+5;
set<ll> adj[N];
void test_case()
{
    ll n,m,v;
    cin>>n>>m>>v;
    if(m>((n-1)*(n-2)/2)+1 || m<n-1)cout<<-1;
    else
    {
        ll node=0;
        for(int i=1;i<=n;i++)
        {
            if(i!=v)
            {
                node=i;
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(!m)break;
            if(i!=node && i!=v)cout<<i<<" "<<v<<endl,m--,adj[i].insert(v),adj[v].insert(i);
        }
        if(m)cout<<v<<" "<<node<<endl,m--,adj[v].insert(node),adj[node].insert(v);
        for(int i=1;i<=n;i++)
        {
            if(!m)break;
            if(i!=node && i!=v)
            {
                for(int j=1;j<=n;j++)
                {
                    if(!m)break;
                    if(j!=node && j!=v && j!=i && adj[i].find(j)==adj[i].end())
                    {
                        adj[j].insert(i);
                        adj[i].insert(j);
                        cout<<j<<" "<<i<<endl,m--;
                    }
                }
            }
        }
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