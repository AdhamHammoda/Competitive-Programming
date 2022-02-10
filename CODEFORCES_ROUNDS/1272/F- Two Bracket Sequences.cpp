#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
string a,b;
ll dp[808][202][202];
ll f1(ll idx,char ch)
{
    if(idx==a.size())return idx;
    return idx + (a[idx]==ch);
}
ll f2(ll idx,char ch)
{
    if(idx==b.size())return idx;
    return idx + (b[idx]==ch);
}
ll solve(ll rem,ll i,ll j)
{
    if(i==a.size() && j==b.size()) return rem;
    ll &ans=dp[rem][i][j];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18;
    if(rem)op1=solve(rem-1,f1(i,')'),f2(j,')'))+1;
    if(rem<=800)op2=solve(rem+1,f1(i,'('),f2(j,'('))+1;
    return ans=min(op1,op2);
}
void build(ll rem,ll i,ll j)
{
    if(i==a.size() && j==b.size())
    {
        cout<<string(rem,')');
        return;
    }
    ll &ans=dp[rem][i][j];
    ll op1=1e18,op2=1e18;
    if(rem)op1=solve(rem-1,f1(i,')'),f2(j,')'))+1;
    if(rem<=800)op2=solve(rem+1,f1(i,'('),f2(j,'('))+1;
    if(ans==op1)
    {
        cout<<")";
        build(rem-1,f1(i,')'),f2(j,')'));
        return;
    }
    else
    {
        cout<<"(";
        build(rem+1,f1(i,'('),f2(j,'('));
        return;
    }
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>a>>b;
    solve(0,0,0);
    build(0,0,0);
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
