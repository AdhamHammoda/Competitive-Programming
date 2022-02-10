#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll dist[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>dist[i][j];
        }
    }
    ll k;
    cin>>k;
    while(k--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        a--,b--;
        c=min(c,dist[a][b]);
        dist[a][b]=dist[b][a]=c;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dist[i][j]=min({dist[i][j],dist[i][a]+dist[b][j]+c,dist[i][b]+dist[a][j]+c});
                sum+=(j>i)*dist[i][j];
            }
        }
        cout<<sum<<" ";
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