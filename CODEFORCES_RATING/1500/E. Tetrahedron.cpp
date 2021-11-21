#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=1e7+5, mod=1e9+7;
int dp[N][2];
void test_case()
{
    int n;
    cin>>n;
    dp[1][0]=1,dp[1][1]=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(j==1)dp[i][j]=(3LL%mod *dp[i-1][0]%mod)%mod;
            else dp[i][j]=(dp[i-1][1]%mod + 2LL%mod *dp[i-1][j]%mod)%mod;
        }
    }
    cout<<dp[n][1];
}
int main()
{
    FIO
//    int t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
//    while(t--)
//    {
        test_case();
//    }
}
