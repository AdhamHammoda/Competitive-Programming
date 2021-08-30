#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll n;
char a;
string s;
ll dp[1000006][2];
ll solve(ll idx,bool ch,ll c)
{
    if(c<0)return 0;
    if(idx==n)return ch && !c;
    ll &ans=dp[idx][ch];
    if(ans!=-1)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1,ch,c + (s[idx]=='(') - (s[idx]==')'));
    if(s[idx]==a && !ch)op2=solve(idx+1,1,c - (s[idx]=='(') + (s[idx]==')'));
    return ans=op1+op2;
}
void test_case()
{
    cin>>n>>s;
    ll c1=0,c2=0;
    for(auto x:s)
    {
        c1+=x=='(';
        c2+=x==')';
    }
    if(abs(c1-c2)!=2)
    {
        cout<<0;
        return;
    }
    c1>c2?a='(':a=')';
    for(int i=0;i<1000006;i++)for(int j=0;j<2;j++)dp[i][j]=-1;
    cout<<solve(0,0,0);
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
