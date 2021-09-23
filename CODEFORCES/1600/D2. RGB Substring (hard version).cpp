#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll dp[200005][4],vis[200005][4],cur=1;
string s;
ll n,k;
map<char,ll>m;
ll solve(ll idx,ll c)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][c];
    if(vis[idx][c]==cur)return ans;
    vis[idx][c]=cur;
    ans=solve(idx+1,(c+1)%3)+(m[s[idx]]!=c);
    return ans;
}
void test_case()
{
    cin>>n>>k>>s;
    solve(0,0),solve(0,1),solve(0,2);
    ll ans=1e18;
    for(int i=0;i<=n-k;i++)
    {
        for(int j=0;j<3;j++)
        {
            ans=min(ans,dp[i][j]-dp[i+k][(k+j)%3]);
        }
    }
    cout<<ans<<endl;
    cur++;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    m['R']=0,m['G']=1,m['B']=2;
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
