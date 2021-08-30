#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll arr[200][200];
ll dp[200][200];
ll n,m,dist;
ll solve(ll i,ll j)
{
    if(i==n || j==m)return 1e18;
    ll curdist=arr[i][j]-(dist+i+j);
    if(curdist<0)return 1e18;
    ll &ans=dp[i][j];
    if(i==n-1 && j==m-1)return ans=curdist;
    if(ans!=-1)return ans;
    ll op1=1e18,op2=1e18;
    op1=solve(i+1,j)+curdist;
    op2=solve(i,j+1)+curdist;
    return ans=min(op1,op2);
}
void clr()
{
    for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=m;j++)
       {
           dp[i][j]=-1;
       }
   }
}
void test_case()
{
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>arr[i][j];
       }
   }
   ll ans=1e18;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           dist=arr[i][j]-(i+j);
           if(dist>arr[0][0])continue;
           clr();
           ans=min(ans,solve(0,0));
       }
   }
   cout<<ans<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
