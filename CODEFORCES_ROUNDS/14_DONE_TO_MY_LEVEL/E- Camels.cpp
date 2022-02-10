#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll dp[21][21][21][21][21];
ll n,rt;
ll solve(ll idx,ll prv1,ll prv2,ll num1,ll num2)
{
    if(idx==n+1)return (num1==rt && num2==rt-1);
    ll &ans=dp[idx][prv1][prv2][num1][num2];
    if(~ans)return ans;
    ans=0;
    for(int i=1;i<=4;i++)
    {
        if(i==prv2)continue;
        bool b1=(prv1<prv2 && prv2>i && idx>=3 && idx<=n);
        bool b2=(prv1>prv2 && prv2<i && idx>=3 && idx<=n);
        ans+=solve(idx+1,prv2,i,num1+b1,num2+b2);
    }
    return ans;
}
void test_case()
{
    cin>>n>>rt;
    memset(dp,-1,sizeof dp);
    cout<<solve(1,0,0,0,0);
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