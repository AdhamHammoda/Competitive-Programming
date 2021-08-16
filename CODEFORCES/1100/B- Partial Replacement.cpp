#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll n,k;
vector<ll> v;
string s;
ll dp[60][60];
ll solve(ll i,ll j)
{
    if(i==v.size())return 0;
    if(i==v.size()-1)
    {
        if(v[i]-v[j]<=k)return 1;
        else return 1e18;
    }
    ll &ans=dp[i][j];
    if(ans!=-1)return ans;
    ll op1=1e18,op2=1e18;
    if(v[i]-v[j]>k)return 1e18;
    op1=solve(i+1,j);
    op2=solve(i+1,i)+1;
    return ans=min(op1,op2);
}
void test_case()
{
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    dp[i][j]=-1;
    v.clear();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')v.push_back(i);
    }
    cout<<solve(1,0)+1<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
