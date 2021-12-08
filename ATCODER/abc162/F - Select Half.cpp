#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=2e5+5;
ll dp[N][3];
ll arr[N],n;
ll solve(ll idx,ll faks)
{
    if(faks>2)return -4e18;
    if(idx>=n)
    {
        if(faks)return 0;
        else return -4e18;
    }
    ll &ans=dp[idx][faks];
    if(~ans)return ans;
    ll op1=-4e18,op2=-4e18;
    op1=solve(idx+1,faks+1);
    op2=solve(idx+2,faks)+arr[idx];
    return ans=max(op1,op2);
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<solve(0,n%2==0);
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
