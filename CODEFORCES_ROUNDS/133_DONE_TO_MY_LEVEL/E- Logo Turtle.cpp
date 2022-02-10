#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
string s;
ll dp[102][52][2][2][202][2];
ll n,k;
ll solve(ll idx,ll rem,bool cur,ll dx,ll x,bool ch)
{
    if(idx==n)
    {
        if(rem==0)
        {
            return abs(x-101);
        }
        else return -1e18;
    }
    ll &ans=dp[idx][rem][cur][dx][x][ch];
    if(~ans)return ans;
    ll op1=-1e18,op2=-1e18,op3=-1e18,op4=-1e18,op5=-1e18,op6=-1e18;
    if(ch)
    {
        if(rem-1>=0)op1=solve(idx,rem-1,cur?0:1,cur?(dx?0:1):dx,x,1);
        if(rem-1>=0)op2=solve(idx+1,rem-1,cur?0:1,cur?(dx?0:1):dx,x+(cur?0:(dx?1:-1)),0);
    }
    else
    {
        if(rem-(s[idx]!='F')>=0)op3=solve(idx+1,rem-(s[idx]!='F'),1,dx,x+(dx?1:-1),0);
        if(rem-(s[idx]!='T')>=0)op4=solve(idx+1,rem-(s[idx]!='T'),0,dx?0:1,x,0);
        if(rem-1>=0)op5=solve(idx,rem-1,s[idx]=='F'?0:1,s[idx]=='F'?(dx?0:1):dx,x,1);
        if(rem-1>=0)op6=solve(idx+1,rem-1,s[idx]=='F'?0:1,s[idx]=='F'?(dx?0:1):dx,x,0);
    }
    return ans=max({op1,op2,op3,op4,op5,op6});
}
void test_case()
{
    cin>>s;
    n=s.size();
    cin>>k;
    memset(dp,-1,sizeof dp);
    cout<<solve(0,k,1,1,101,0);
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