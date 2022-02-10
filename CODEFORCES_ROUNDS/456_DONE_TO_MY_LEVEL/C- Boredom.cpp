#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll n;
ll freq[N],dp[N];
ll mx=0;
ll solve(ll idx)
{
    if(idx>mx)return 0;
    ll &ans=dp[idx];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1);
    op2=solve(idx+2)+idx*freq[idx];
    return ans=max(op1,op2);
}
void test_case()
{
    cin>>n;
    ll x;
    for(int i=0;i<n;i++)cin>>x,freq[x]++,mx=max(mx,x);
    memset(dp,-1,sizeof dp);
    cout<<solve(1);
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