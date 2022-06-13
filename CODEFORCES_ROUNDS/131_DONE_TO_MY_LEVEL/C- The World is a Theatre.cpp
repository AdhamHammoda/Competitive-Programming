#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=2e5+5;
ll dp[50][50];
ll solve(ll n,ll r)
{
    if(r==0 && n==0)return 1;
    if(r<0 || n<0)return 0;
    ll &ans=dp[n][r];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(n-1,r-1);
    op2=solve(n-1,r);
    return ans=op1+op2;
}
void test_case()
{
    ll n,m,t;
    cin>>n>>m>>t;
    memset(dp,-1,sizeof dp);
    ll ans=0;
    for(ll i=4;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            if(i+j==t)ans+=solve(m,j)*solve(n,i);
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