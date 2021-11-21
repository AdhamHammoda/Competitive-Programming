#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    set<ll> adj[12];
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            for(int k=1;k<=5;k++)
            {
                if(j!=k && k!=i && j!=i
                && adj[i].find(k)==adj[i].end()
                && adj[i].find(j)==adj[i].end()
                && adj[j].find(k)==adj[j].end())
                {
                    cout<<"WIN";
                    return;
                }
                if(j!=k && k!=i && j!=i
                && adj[i].find(k)!=adj[i].end()
                && adj[i].find(j)!=adj[i].end()
                && adj[j].find(k)!=adj[j].end())
                {
                    cout<<"WIN";
                    return;
                }
            }
        }
    }
    cout<<"FAIL";
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
