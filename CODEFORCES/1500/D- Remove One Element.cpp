#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
ll n;
ll dp[200005][3][3];
ll arr[200005];
ll solve(ll idx,ll rmv,ll prev)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][rmv][prev];
    if(~ans)return ans;
    ll lst=0;
    if(rmv && prev)lst=arr[idx-2];
    else lst=arr[idx-1];
    ll op1=0,op2=0;
    if(arr[idx]>lst)op1=solve(idx+1,rmv,0)+1;
    if(!rmv)op2=solve(idx+1,1,1);
    return ans=max({op1,op2});
}
void test_case()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<200005;i++)
    for(int j=0;j<3;j++)
    for(int k=0;k<3;k++)
    dp[i][j][k]=-1;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,solve(i+1,0,0)+1);
    }
    cout<<mx;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
