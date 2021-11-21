#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
string s;
ll n;
const ll N=2e5+5;
ll dp[N][4];
ll solve(ll idx,ll mod)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][mod];
    if(~ans)return ans;
    ll op1=0,op2=0,op3=0;
    ll tmp=s[idx]-'0';
    op1=solve(idx+1,0)+((mod+tmp)%3==0);
    op2=solve(idx+1,(mod+tmp)%3);
    return ans=max(op1,op2);
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
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
