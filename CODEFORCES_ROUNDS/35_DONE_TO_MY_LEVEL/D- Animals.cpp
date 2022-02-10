#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n,x;
ll dp[200][20000];
ll arr[1000];
ll solve(ll idx,ll rem)
{
    if(idx==n+1)return 0;
    ll &ans=dp[idx][rem];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1,rem);
    if(rem>=arr[idx]*(n-idx+1))op2=solve(idx+1,rem-(arr[idx])*(n-idx+1))+1;
    return ans=max(op1,op2);
}


void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>arr[i];
    cout<<solve(1,x);
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}