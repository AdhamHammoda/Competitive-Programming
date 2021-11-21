#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll dp[72][72][72][72];
ll arr[72][72];
ll n,m,k;
ll solve(ll x,ll y,ll rem,ll c)
{
    if(x==n)
    {
        if(rem) return -1e18;
        return 0;
    }
    ll &ans=dp[x][y][rem][c];
    if(ans!=-1)return ans;
    if(y==m || c==m/2)return ans=solve(x+1,0,rem,0);
    ll op1=0,op2=0;
    op1=solve(x,y+1,(rem + arr[x][y])%k,c+1)+arr[x][y];
    op2=solve(x,y+1,rem,c);
    return ans=max(op1,op2);
}
void test_case()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<72;i++)
    for(int j=0;j<72;j++)
    for(int r=0;r<72;r++)
    for(int u=0;u<72;u++)
    dp[i][j][r][u]=-1;
    cout<<solve(0,0,0,0);
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
