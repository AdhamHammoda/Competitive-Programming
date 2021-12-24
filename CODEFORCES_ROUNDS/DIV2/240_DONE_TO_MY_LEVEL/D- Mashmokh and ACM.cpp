#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll n,k;
ll dp[2005][2005];
const ll mod=1e9+7;
ll solve(ll idx,ll prv)
{
    if(idx==k)return 1;
    ll &ans=dp[idx][prv];
    if(~ans)return ans;
    ans=0;
    for(int i=prv;i<=n;i+=prv)
    {
        ans=(ans%mod + solve(idx+1,i)%mod)%mod;
    }
    return ans;
}
void test_case()
{
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    cout<<solve(0,1);
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}