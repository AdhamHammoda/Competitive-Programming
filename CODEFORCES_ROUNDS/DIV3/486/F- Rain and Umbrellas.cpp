#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2020;
ll a,n,m;
ll dp[N][N],umb[N],mp[N];
bool israin[N];
void test_case()
{
    cin>>a>>n>>m;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        for(int i=x;i+1<=y;i++)israin[i]=true;
    }
    for(int i=0;i<N;i++)umb[i]=-1;
    for(int i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        mp[i]=y;
        if(umb[x]==-1)umb[x]=i;
        else if(mp[umb[x]]>y)umb[x]=i;
    }
    for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    dp[i][j]=1e18;
    dp[0][m]=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(dp[i][j]==1e18)continue;
            if(!israin[i])dp[i+1][m]=min(dp[i+1][m],dp[i][j]);
            if(j<m)dp[i+1][j]=min(dp[i][j]+mp[j],dp[i+1][j]);
            if(umb[i]!=-1)
            {
                dp[i+1][umb[i]]=min(dp[i][j]+mp[umb[i]],dp[i+1][umb[i]]);
            }
        }
    }
    ll ans=1e18;
    for(int i=0;i<N;i++)ans=min(ans,dp[a][i]);
    if(ans==1e18)ans=-1;
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
