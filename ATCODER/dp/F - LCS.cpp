#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=3005;
string s1,s2;
ll dp[N][N];
ll solve(ll i,ll j)
{
    if(i==s1.size() || j==s2.size())return 0;
    ll &ans=dp[i][j];
    if(~ans)return ans;
    ll op1=0,op2=0,op3=0;
    if(s1[i]==s2[j])op1=solve(i+1,j+1)+1;
    op2=solve(i+1,j);
    op3=solve(i,j+1);
    return ans=max({op1,op2,op3});
}
void build(ll i,ll j)
{
    if(i==s1.size() || j==s2.size())return ;
    ll &ans=dp[i][j];
    ll op1=4e18,op2=0,op3=0;
    if(s1[i]==s2[j])op1=solve(i+1,j+1)+1;
    op2=solve(i+1,j);
    op3=solve(i,j+1);
    if(ans==op1)
    {
        cout<<s1[i];
        build(i+1,j+1);
        return;
    }
    else if(ans==op2)
    {
        build(i+1,j);
        return;
    }
    else
    {
        build(i,j+1);
        return;
    }
}

void test_case()
{
    cin>>s1>>s2;
    memset(dp,-1,sizeof dp);
    solve(0,0);
    build(0,0);

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
