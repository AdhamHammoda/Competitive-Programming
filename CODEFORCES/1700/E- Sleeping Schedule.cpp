#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll dp[2005][2005];
ll arr[2005];
ll n,h,l,r;
ll solve(ll idx,ll hour)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][hour];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1,(hour+arr[idx])%h)+(((hour+arr[idx])%h)>=l && ((hour+arr[idx])%h)<=r);
    op2=solve(idx+1,(hour+arr[idx]-1)%h)+(((hour+arr[idx]-1)%h)>=l && ((hour+arr[idx]-1)%h)<=r);
    return ans=max(op1,op2);
}
void test_case()
{
    cin>>n>>h>>l>>r;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<2005;i++)
    {
        for(int j=0;j<2005;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<solve(0,0);
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
