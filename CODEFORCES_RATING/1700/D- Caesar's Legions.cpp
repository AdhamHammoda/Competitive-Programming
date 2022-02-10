#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n1,n2,k1,k2;
ll dp[105][105][15][15];
const ll mod=1e8;
ll solve(ll i1,ll i2,ll c1,ll c2)
{
    if(i1>n1 || i2>n2)return 0;
    if(i1==n1 && i2==n2)return 1;
    ll &ans=dp[i1][i2][c1][c2];
    if(~ans)return ans;
    ll op1=0,op2=0;
    if(c1<k1)op1=solve(i1+1,i2,c1+1,0);
    if(c2<k2)op2=solve(i1,i2+1,0,c2+1);
    return ans=(op1%mod +op2%mod)%mod;
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n1>>n2>>k1>>k2;
    cout<<solve(0,0,0,0);
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