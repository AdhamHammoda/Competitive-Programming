#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2005;
ll dp[N][N],arr[N];
ll n,h,l,r;
ll between(ll x){return x>=l && x<=r;}
ll solve(ll idx,ll hour)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][hour];
    if(~ans)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1,(hour+arr[idx]+h)%h)+between((hour+arr[idx]+h)%h);
    op2=solve(idx+1,(hour+arr[idx]-1+h)%h)+between((hour+arr[idx]-1+h)%h);
    return ans=max(op1,op2);
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>h>>l>>r;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<solve(0,0);
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
