#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
string s,r;
ll dp[200][5];
ll solve(ll i,ll j)
{
    if(j==r.size())return 1;
    if(i>=s.size() || j>=r.size())return 0;
    ll &ans=dp[i][j];
    if(~ans)return ans;
    ans=0;
    ll op1=0,op2=0;
    op1=solve(i+1,j);
    if(s[i]==r[j])op2=solve(i+1,j+1);
    return ans|=(op1|op2);
}
void test_case()
{
    cin>>s;
    ll x=8;
    for(int i=0;i<1000;i++)
    {
        r=to_string(x*i);
        memset(dp,-1,sizeof dp);
        if(solve(0,0))cout<<"YES"<<endl<<r,exit(0);
    }
    cout<<"NO";
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