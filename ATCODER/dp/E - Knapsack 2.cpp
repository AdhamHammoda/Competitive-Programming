#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll dp[105][100005];
ll w[200],v[200];
ll n,W;
ll solve(ll idx,ll V)
{
    if(idx==n)
    {
        if(V==0)return 0;
        else return 2e18;
    }
    ll &ans=dp[idx][V];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18;
    if(V>=v[idx])op1=solve(idx+1,V-v[idx])+w[idx];
    op2=solve(idx+1,V);
    return ans=min(op1,op2);
}
void test_case()
{
    cin>>n>>W;
    for(int i=0;i<n;i++)cin>>w[i]>>v[i];
    memset(dp,-1,sizeof dp);
    for(int i=100004;i;i--)
    {
        if(solve(0,i)<=W)
        {
            cout<<i;
            return;
        }
    }
    cout<<0;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
