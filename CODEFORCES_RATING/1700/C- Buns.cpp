#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n,m,c0,d0;
vector<ll> arr[2000];
ll dp[20][2000];
ll solve(ll idx,ll rem)
{
    if(idx==m)return (rem/c0)*d0;
    ll &ans=dp[idx][rem];
    if(~ans)return ans;
    ll op1=0,op2=0;
    ll a,b,c,d;
    a=arr[idx][0],b=arr[idx][1],c=arr[idx][2],d=arr[idx][3];
    for(int i=0;i*b<=a && i*c<=rem;i++)op1=max(op1,solve(idx+1,rem-i*c)+i*d);
    for(int i=0;i*c0<=rem;i++)op2=max(op2,solve(idx+1,rem-i*c0)+i*d0);
    return ans=max(op1,op2);
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>m>>c0>>d0;
    for(int i=0;i<m;i++)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        arr[i]={a,b,c,d};
    }
    cout<<solve(0,n);
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