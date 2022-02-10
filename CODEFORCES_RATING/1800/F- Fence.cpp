#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=4e4+5;
ll arr[N];
ll dp[205][N][3];
ll n,a,b;
ll sum=0;
ll solve(ll idx,ll rem,ll prv)
{
    if(idx==n)
    {
        if(a-rem+b>=sum)return 0;
        else return 4e18;
    }
    ll &ans=dp[idx][rem][prv];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18;
    if(rem>=arr[idx])op1=solve(idx+1,rem-arr[idx],0)+min(arr[idx-1],arr[idx])*(prv!=0 && idx);
    op2=solve(idx+1,rem,1)+min(arr[idx-1],arr[idx])*(prv!=1 && idx);
    return ans=min({op1,op2});
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    cin>>a>>b;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
    ll ans=solve(0,a,2);
    if(ans>1e16)cout<<-1;
    else cout<<ans;
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}