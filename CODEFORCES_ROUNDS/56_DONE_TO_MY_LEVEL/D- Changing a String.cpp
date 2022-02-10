#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n,m;
string a,b;
ll dp[2000][2000];
ll solve(ll i,ll j)
{
    if(i>n || j>m)return 1e18;
    if(i==n && j==m)return 0;
    ll &ans=dp[i][j];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18,op3=1e18;
    op1=solve(i+1,j+1)+(a[i]!=b[j]);
    op2=solve(i+1,j)+1;
    op3=solve(i,j+1)+1;
    return ans=min({op1,op2,op3});
}
ll all=0;
void build(ll i,ll j)
{
    if(i==n && j==m)return;
    ll &ans=dp[i][j];
    ll op1=1e18,op2=1e18,op3=1e18;
    op1=solve(i+1,j+1)+(a[i]!=b[j]);
    op2=solve(i+1,j)+1;
    op3=solve(i,j+1)+1;
    if(ans==op1)
    {
        if(a[i]!=b[j])cout<<"REPLACE "<<i+1+all<<" "<<b[j]<<endl;
        build(i+1,j+1);
        return;
    }
    else if(ans==op2)
    {
        cout<<"DELETE "<<i+1+all<<endl;
        all--;
        build(i+1,j);
        return;
    }
    else if(ans==op3)
    {
        cout<<"INSERT "<<i+1+all<<" "<<b[j]<<endl;
        all++;
        build(i,j+1);
        return;
    }
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>a>>b;
    n=a.size();
    m=b.size();
    cout<<solve(0,0)<<endl;
    build(0,0);
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