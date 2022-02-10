#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
string s;
const ll N=2e5+5;
ll dp[N][2];
ll n;
ll solve(ll idx,bool ch)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][ch];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18,op3=1e18;
    if(!ch)
    {
        op1=solve(idx+1,0)+(s[idx]>='a' && s[idx]<='z');
        op2=solve(idx+1,1)+(s[idx]>='A' && s[idx]<='Z');
    }
    else op3=solve(idx+1,1)+(s[idx]>='A' && s[idx]<='Z');
    return ans=min({op1,op2,op3});
}
void test_case()
{
    cin>>s;
    n=s.size();
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0);
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}