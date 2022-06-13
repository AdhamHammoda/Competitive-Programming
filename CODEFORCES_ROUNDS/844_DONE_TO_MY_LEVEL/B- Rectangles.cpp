#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
ll grid[57][57];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
        }
    }
    ll ans=0;
    ll c1=0,c2=0;
    for(int i=1;i<=n;i++)
    {
        c1=0,c2=0;
        for(int j=1;j<=m;j++)
        {
            c1+=(!grid[i][j]);
            c2+=(grid[i][j]);
        }
        ans+=(1LL<<(c1))+(1LL<<(c2))-2;
    }
    for(int j=1;j<=m;j++)
    {
        c1=0,c2=0;
        for(int i=1;i<=n;i++)
        {
            c1+=(!grid[i][j]);
            c2+=(grid[i][j]);
        }
        ans+=(1LL<<(c1))+(1LL<<(c2))-2;
    }
    cout<<ans-n*m;
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}