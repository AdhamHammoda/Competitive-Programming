#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
string s;
ll dp[1005][2];
ll n;
ll solve(ll idx,ll prv)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][prv];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18;
    ll tmp=s[idx]-'0';
    if(prv==1)op1=solve(idx+1,0)+(tmp);
    if(prv==0)op2=solve(idx+1,1)+(tmp==0);
    return ans=min(op1,op2);
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>s;
    ll tmp=s[0]-'0';
    cout<<min(solve(1,0)+(tmp==1),solve(1,1)+(tmp==0));
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}