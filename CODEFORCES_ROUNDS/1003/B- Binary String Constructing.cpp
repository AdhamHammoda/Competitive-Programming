#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll dp[205][105][205][3];
ll n1,n2,x;
ll solve(ll idx,ll a,ll c,bool prv)
{
    if(idx==n1+n2)
    {
        if(c==x && a==n1)return 0;
        else return -1e15;
    }
    ll &ans=dp[idx][a][c][prv];
    if(~ans)return ans;
    ll op1=-1e15,op2=-1e15;
    op1=solve(idx+1,a+1,c+(prv!=0 && idx),0)+(prv!=0 && idx);
    op2=solve(idx+1,a,c+(prv!=1 && idx),1)+(prv!=1 && idx);
    return ans=max(op1,op2);
}
void build(ll idx,ll a,ll c,bool prv)
{
    if(idx==n1+n2)
    {
        return;
    }
    ll &ans=dp[idx][a][c][prv];
    ll op1=0,op2=0;
    op1=solve(idx+1,a+1,c+(prv!=0 && idx),0)+(prv!=0 && idx);
    op2=solve(idx+1,a,c+(prv!=1 && idx),1)+(prv!=1 && idx);
    if(op1==ans)
    {
        cout<<0;
        build(idx+1,a+1,c+(prv!=0 && idx),0);
        return;
    }
    else
    {
        cout<<1;
        build(idx+1,a,c+(prv!=1 && idx),1);
        return;
    }
}
void test_case()
{
    cin>>n1>>n2>>x;
    memset(dp,-1,sizeof dp);
    solve(0,0,0,0);
    build(0,0,0,0);
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
