#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
ll arr[N];
ll dp[5007][5007];
ll n,m,k;
ll solve(ll idx,ll rem)
{
    if(idx>n)
    {
        if(rem==k)return 0;
        else return -1e18;
    }
    ll &ans=dp[idx][rem];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1,rem);
    op2=solve(idx+m,rem+1)+(arr[idx]-arr[idx-m]);
    return ans=max(op1,op2);
}
void test_case()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
    memset(dp,-1,sizeof dp);
    cout<<solve(m,0);
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