#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll dp[100002][2];
ll n,k,d;
ll mod=1e9+7;
ll solve(ll cur,bool vis)
{
    if(cur>n)return 0;
    if(cur==n)
    {
        return vis;
    }
    ll &ans=dp[cur][vis];
    if(~ans)return ans;
    ll op1=0;
    for(int i=1;i<=k;i++)
    {
        op1+=solve(cur+i,vis+(i>=d))%mod;
    }
    return ans=op1%mod;
}
void test_case()
{
    cin>>n>>k>>d;
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0);
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