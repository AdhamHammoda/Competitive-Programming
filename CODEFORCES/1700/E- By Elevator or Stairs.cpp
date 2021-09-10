#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll dp[200005][2];
ll n,c;
ll str[200005],elev[200005];
ll solve(ll idx,bool prev)
{
    if(idx==-1)return 0;
    ll &ans=dp[idx][prev];
    if(~ans)return ans;
    ll op1=1e17,op2=1e17,op3=1e17;
    op1=solve(idx-1,0)+str[idx];
    if(prev)op2=solve(idx-1,1)+elev[idx];
    if(!prev)op3=solve(idx-1,1)+elev[idx]+c;
    return ans=min({op1,op2,op3});
}
void test_case()
{
    cin>>n>>c;
    for(int i=0;i<n-1;i++)cin>>str[i];
    for(int i=0;i<n-1;i++)cin>>elev[i];
    for(int i=0;i<200005;i++)
    {
        for(int j=0;j<2;j++)
        {
            dp[i][j]=-1;
        }
    }
    solve(n-2,0);
    cout<<0<<" ";
    for(int i=0;i<n-1;i++)
    {
        cout<<dp[i][0]<<" ";
    }
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
