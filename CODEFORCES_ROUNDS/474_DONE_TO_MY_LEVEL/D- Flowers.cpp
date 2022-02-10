#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll k;
const ll mod=1e9+7;
const ll N=4e5+5;
ll dp[N];
ll solve(ll idx)
{
    if(idx<k)return dp[idx]=1;
    ll &ans=dp[idx];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(idx-1);
    op2=solve(idx-k);
    return ans=(op1%mod + op2%mod)%mod;
}
void test_case()
{
    ll a,b;
    cin>>a>>b;
    cout<<(dp[b]%mod -dp[a-1]%mod + mod)%mod<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    cin>>t;
//    t=1;
    cin>>k;
    memset(dp,-1,sizeof dp);
    for(int i=1;i<N;i++)solve(i);
    for(int i=1;i<N;i++)dp[i]+=dp[i-1],dp[i]%=mod;
    while(t--)
    {
        test_case();
    }
}