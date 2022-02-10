#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
const ll N=5e5+5;
ll arr[N],sum[N],dp[N][3];
ll n;
ll solve(ll i,ll j)
{
    if(j==2)return 1;
    if(i==n)return 0;
    ll &ans=dp[i][j];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(i+1,j);
    if(arr[i]==sum[j])op2=solve(i+1,j+1);
    return ans=op1+op2;
}
void test_case()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
    if(arr[n]%3)cout<<0,exit(0);
    sum[0]=arr[n]/3;
    sum[1]=2*arr[n]/3;
    memset(dp,-1,sizeof dp);
    cout<<solve(1,0);
}
int main()
{
    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}