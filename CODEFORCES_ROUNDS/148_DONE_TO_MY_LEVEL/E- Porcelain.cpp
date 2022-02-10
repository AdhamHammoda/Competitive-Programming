#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
vector<ll> v[200];
ll best[200][200],sum[200][200];
ll dp[105][10005];
ll n,m;
ll solve(ll idx,ll rem)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][rem];
    if(~ans)return ans;
    ans=0;
    for(ll i=0;i<=min(rem,(ll)v[idx].size());i++)
    {
        ans=max(ans,solve(idx+1,rem-i)+best[idx][i]);
    }
    return ans;
}
void test_case()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            ll a;
            cin>>a;
            v[i].push_back(a);
            sum[i][j+1]+=sum[i][j]+v[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        ll sz=v[i].size();
        for(int j=0;j<=sz;j++)
        {
            for(int k=0;k<=j;k++)
            {
                best[i][j]=max(best[i][j],
                sum[i][k]+sum[i][sz]
                -sum[i][sz-j+k]);
            }
        }
    }
    memset(dp,-1,sizeof dp);
    cout<<solve(0,m);

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