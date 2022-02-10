#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
const ll N=2e3+5;
const ll mod=1e9+7;
ll dp[N][2*N][2];
ll n,m,b,mn=1e18;
string s;
ll solve(ll idx,ll bal,bool tam)
{
    if(idx==n-m+1)return tam && (bal==0);
    ll &ans=dp[idx][bal][tam];
    if(~ans)return ans;
    ll op1=0,op2=0,op3=0;
    if(bal+1<=N)op1=solve(idx+1,bal+1,tam);
    if(bal-1>=0)op2=solve(idx+1,bal-1,tam);
    if(!tam && bal+mn>=0 && bal+b<=N)op3=solve(idx+1,bal+b,1);
    return ans=((op1%mod + op2%mod)%mod + op3%mod)%mod;
}
void test_case()
{
    cin>>n>>m;
    cin>>s;
    for(auto x:s)
    {
        b+=(x=='(');
        b-=(x==')');
        mn=min(mn,b);
    }
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0,0);
}
int main()
{
    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}