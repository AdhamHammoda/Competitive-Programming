#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll n;
const ll N=2e5+5;
ll arr[N];
ll dp[N][2];
ll solve(ll idx,bool ch)
{
    if(idx==n)
    {
        if(ch)return 0;
        else return 4e18;
    }
    ll &ans=dp[idx][ch];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18,op3=1e18;
    if(!ch)
    {
        op1=solve(idx+1,0)+(arr[idx]>=0);
        if(idx!=n-1)op3=solve(idx+1,1)+(arr[idx]>=0);
    }
    else if(ch)op2=solve(idx+1,1)+(arr[idx]<=0);
    return ans=min({op1,op2,op3});
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<solve(0,0);
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