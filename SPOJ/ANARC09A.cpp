#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=2005;
ll j=0;
ll dp[N][2*N];
string s;
ll solve(ll idx,ll bal)
{
    if(bal<0 || bal>=4000)return 1e18;
    if(idx==s.size())
    {
        if(bal==0)return 0;
        else return 1e18;
    }
    ll &ans=dp[idx][bal];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18;
    op1=solve(idx+1,bal-1)+(s[idx]!='}');
    op2=solve(idx+1,bal+1)+(s[idx]!='{');
    return ans=min({op1,op2});
}
void test_case()
{
    j++;
    memset(dp,-1,sizeof dp);
    if(s[0]=='-')exit(0);
    cout<<j<<". "<<solve(0,0)<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(cin>>s)
    {
        test_case();
    }
}
