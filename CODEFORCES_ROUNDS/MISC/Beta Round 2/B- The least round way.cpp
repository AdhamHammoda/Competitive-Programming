#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=1005;
ll dp[N][N][2],num[N][N][2],grid[N][N];
ll n;
ll solve(ll x,ll y,ll r)
{
    if(x==n-1 && y==n-1)return num[x][y][r];
    ll &ans=dp[x][y][r];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18;
    if(x+1<n)op1=solve(x+1,y,r)+num[x][y][r];
    if(y+1<n)op2=solve(x,y+1,r)+num[x][y][r];
    return ans=min(op1,op2);
}
void build(ll x,ll y,ll r)
{
    if(x==n-1 && y==n-1)return;
    ll &ans=dp[x][y][r];
    ll op1=1e18,op2=1e18;
    if(x+1<n)op1=solve(x+1,y,r)+num[x][y][r];
    if(y+1<n)op2=solve(x,y+1,r)+num[x][y][r];
    if(ans==op1)
    {
        cout<<"D";
        build(x+1,y,r);
        return;
    }
    else
    {
        cout<<"R";
        build(x,y+1,r);
        return;
    }
}

void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
            ll tmp=grid[i][j];
            ll c2=(!tmp),c5=(!tmp);
            while(tmp>0 && tmp%2==0)c2++,tmp/=2;
            while(tmp>0 && tmp%5==0)c5++,tmp/=5;
            num[i][j][0]=c2,num[i][j][1]=c5;
        }
    }
    ll ans1=solve(0,0,0),ans2=solve(0,0,1);
    ll ans=min(ans1,ans2);
    if(ans>=1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    cout<<1<<endl;
                    for(int u=0;u<i;u++)cout<<"D";
                    for(int u=0;u<j;u++)cout<<"R";
                    for(int u=i+1;u<n;u++)cout<<"D";
                    for(int u=j+1;u<n;u++)cout<<"R";
                    return;
                }
            }
        }
    }
    ll x=(ans2<ans1);
    cout<<ans<<endl;
    build(0,0,x);
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