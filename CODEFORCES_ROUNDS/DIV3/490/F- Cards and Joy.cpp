#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll n,k;
ll h[11],arr[5001],f[501];
ll dp[5001][501][11];
ll solve(ll idx,ll player)
{
    if(idx==n*k)return h[cards];
    ll &ans=dp[idx][player][cards];
    if(~ans)return ans;
    ll op1=0,op2=0,op3=0;
    op1=solve(idx+1,player,cards);
    if(cards<k)op2=solve(idx+1,player,cards+(arr[idx]==f[player]));
    if(player<n)op3=solve(idx,player+1,0)+h[cards];
    return ans=max({op1,op2,op3});
}
void test_case()
{
    cin>>n>>k;
    for(int i=0;i<n*k;i++)cin>>arr[i];
    sort(arr,arr+n*k);
    for(int i=0;i<n;i++)cin>>f[i];
    sort(f,f+n);
    for(int i=1;i<=k;i++)cin>>h[i];
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0,0);
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
