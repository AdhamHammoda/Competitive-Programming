#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,m;
ll dp[200][200];
ll arr[200];
ll solve(ll idx,ll rem)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][rem];
    if(~ans)return ans;
    ll op1=0,op2=0;
    if(rem<m)op1=solve(idx+1,rem+1)-arr[idx];
    op2=solve(idx+1,rem);
    return ans=max(op1,op2);
}
void test_case()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<200;i++)
    for(int j=0;j<200;j++)
    dp[i][j]=-1;
    cout<<solve(0,0);
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
