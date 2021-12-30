#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll dp[50][50];
ll solve(ll n,ll lev)
{
    if(lev<0)return 0;
    if(!n)return 1;
    ll &ans=dp[n][lev];
    if(~ans)return ans;
    ans=0;
    for(ll root=1;root<=n;root++)
    {
        ll lef=solve(root-1,lev-1);
        ll rig=solve(n-root,lev-1);
        ans+=lef*rig;
    }
    return ans;
}
void test_case()
{
    ll n,h;
    cin>>n>>h;
    memset(dp,-1,sizeof dp);
    ll ans1=solve(n,h-1);
     memset(dp,-1,sizeof dp);
    ll ans2=solve(n,40);
    cout<<ans2-ans1;
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