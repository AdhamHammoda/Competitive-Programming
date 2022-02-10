#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll dp[N][2][2],arr[N];
ll n;
ll solve(ll idx,bool rmv,bool prv)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][rmv][prv];
    if(~ans)return ans;
    ll op1=0,op2=0;
    ll lst=arr[idx-1-(prv && rmv)];
    if(arr[idx]>lst)op1=solve(idx+1,rmv,0)+1;
    if(!rmv)op2=solve(idx+1,1,1);
    return ans=max(op1,op2);
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ans=0;
    for(int i=0;i<n;i++)ans=max(ans,solve(i+1,0,0));
    cout<<ans+1;
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
