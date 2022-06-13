#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
ll cs=1;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll dist[n+2][n+2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dist[i][j]=4e18;
        }
    }
    for(int i=0;i<n;i++)dist[i][i]=0;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        dist[u][v]=1;
        dist[v][u]=1;
    }
    ll st,en;
    cin>>st>>en;
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(dist[st][i]>4e12 || dist[i][en]>4e12)continue;
        ans=max(ans,dist[st][i]+dist[i][en]);
    }
    cout<<"Case "<<cs<<": "<<ans<<endl;
    cs++;
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
