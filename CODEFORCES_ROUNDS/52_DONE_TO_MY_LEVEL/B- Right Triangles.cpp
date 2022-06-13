#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
char grid[1005][1005];
ll r[1005][1005],c[1005][1005];
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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            r[i][j]+=r[i][j-1]+(grid[i][j]=='*');
        }
    }
    for(int j=1;j<=m;j++)
    {
        for(int i=1;i<=n;i++)
        {
            c[i][j]+=c[i-1][j]+(grid[i][j]=='*');
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(grid[i][j]=='*')
            {
                ll allr=r[i][m],allc=c[n][j];
                ans+=r[i][j-1]*c[i-1][j];
                ans+=(allr-r[i][j])*c[i-1][j];
                ans+=r[i][j-1]*(allc-c[i][j]);
                ans+=(allr-r[i][j])*(allc-c[i][j]);
            }
        }
    }
    cout<<ans;
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