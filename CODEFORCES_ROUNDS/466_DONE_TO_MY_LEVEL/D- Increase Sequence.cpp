#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
const ll N=2e3+4;
const ll mod=1e9+7;
ll dp[N][N];
ll arr[N];
ll n,h;
ll solve(ll idx,ll bal)
{
    if(idx==n) return (bal==0);
    ll &ans=dp[idx][bal];
    if(~ans)return ans;
    ll op1=0,op2=0,op3=0,op4=0;
    if(arr[idx]+bal==h)
    {
        op1=solve(idx+1,bal);
        if(bal)op2=bal*solve(idx+1,bal-1);
    }
    else if(arr[idx]+bal+1==h)
    {
        op3=solve(idx+1,bal+1);
        op4=(bal+1)*solve(idx+1,bal);
    }
    return ans=((op1%mod + op2%mod)%mod
    + (op3%mod + op4%mod)%mod  )%mod;
}
void test_case()
{
    cin>>n>>h;
    for(int i=0;i<n;i++)cin>>arr[i];
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0);
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