#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n;
ll dp[40][20][20];
string s;
ll powers[20];
ll solve(ll idx,ll n1,ll n2)
{
    if(idx==2*n)
    {
        if(n1==n && n2==n)return 0;
        else return -1e18;
    }
    ll &ans=dp[idx][n1][n2];
    if(~ans)return ans;
    ll op1=0,op2=0;
    ll tmp=s[idx]-'0';
    op1=solve(idx+1,n1+1,n2)+tmp*powers[n-n1-1];
    op2=solve(idx+1,n1,n2+1)+tmp*powers[n-n2-1];
    return ans=max(op1,op2);
}
string all="";
void build(ll idx,ll n1,ll n2)
{
    if(idx==2*n)return;
    ll &ans=dp[idx][n1][n2];
    ll op1=0,op2=0;
    ll tmp=s[idx]-'0';
    op1=solve(idx+1,n1+1,n2)+tmp*powers[n-n1-1];
    op2=solve(idx+1,n1,n2+1)+tmp*powers[n-n2-1];
    if(ans==op1)
    {
        all+="H";
        build(idx+1,n1+1,n2);
        return;
    }
    else
    {
        all+="M";
        build(idx+1,n1,n2+1);
        return;
    }
}
void test_case()
{
    cin>>n;
    cin>>s;
    powers[0]=1;
    for(int i=1;i<20;i++)
    {
        powers[i]=10LL*powers[i-1];
    }
    memset(dp,-1,sizeof dp);
    solve(0,0,0);
    build(0,0,0);
    cout<<all;
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