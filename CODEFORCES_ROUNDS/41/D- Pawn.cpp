#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n,m,k;
ll dp[105][105][20];
char arr[105][105];
ll solve(ll x,ll y,ll mod)
{
    if(!x)
    {
        if(!mod)return 0;
        return -1e18;
    }
    ll &ans=dp[x][y][mod];
    if(~ans)return ans;
    ll tmp=arr[x][y]-'0';
    ll op1=-1e18,op2=-1e18;
    if(y-1>=1)op1=solve(x-1,y-1,(mod+tmp)%(k+1))+tmp;
    if(y+1<=m)op2=solve(x-1,y+1,(mod+tmp)%(k+1))+tmp;
    return ans=max(op1,op2);
}
void build(ll x,ll y,ll mod)
{
    if(x==1)return;
    ll &ans=dp[x][y][mod];
    ll tmp=arr[x][y]-'0';
    ll op1=-1e18,op2=1e18;
    if(y-1>=1)op1=solve(x-1,y-1,(mod+tmp)%(k+1))+tmp;
    if(y+1<=m)op2=solve(x-1,y+1,(mod+tmp)%(k+1))+tmp;
    if(ans==op1)
    {
        cout<<"L";
        build(x-1,y-1,(mod+tmp)%(k+1));
        return;
    }
    else if(ans==op2)
    {
        cout<<"R";
        build(x-1,y+1,(mod+tmp)%(k+1));
        return;
    }
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    ll ans=-1e18;
    for(int i=1;i<=m;i++)ans=max(ans,solve(n,i,0));
    if(ans<-1e17)cout<<-1,exit(0);
    for(int i=1;i<=m;i++)
    {
        if(ans==solve(n,i,0))
        {
            cout<<solve(n,i,0)<<endl;
            cout<<i<<endl;
            build(n,i,0);
            exit(0);
        }
    }
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