#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll dp[35][35][55];
ll solve(ll n,ll m,ll k)
{
    ll &ans=dp[n][m][k];
    if(ans || n*m==k || !k)return ans;
    ll op1=1e18,op2=1e18;
    for(int i=1;i<=n-i;i++)
    {
        for(int j=0;j<=k;j++)
        {
            op1=min(op1,solve(i,m,k-j)+solve(n-i,m,j)+m*m);
        }
    }
    for(int i=1;i<=m-i;i++)
    {
        for(int j=0;j<=k;j++)
        {
            op2=min(op2,solve(n,i,j)+solve(n,m-i,k-j)+n*n);
        }
    }
    return ans=min(op1,op2);
}
void test_case()
{
    ll n,m,k;
    cin>>n>>m>>k;
    cout<<solve(n,m,k)<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}