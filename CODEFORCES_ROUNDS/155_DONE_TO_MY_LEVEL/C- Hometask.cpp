#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll n;
ll cant[30][30];
const ll N=2e5;
ll dp[N][30];
string s;
ll solve(ll idx,ll prv)
{
    if(idx==n)return 0;
    ll &ans=dp[idx][prv];
    if(~ans)return ans;
    ll op1=1e18,op2=1e18;
    op1=solve(idx+1,prv)+1;
    if(!cant[s[idx]-'a'][prv])op2=solve(idx+1,s[idx]-'a');
    return ans=min(op1,op2);
}
void test_case()
{
    cin>>s;
    ll k;
    cin>>k;
    n=s.size();
    while(k--)
    {
        string a;
        cin>>a;
        cant[a[0]-'a'][a[1]-'a']=1;
        cant[a[1]-'a'][a[0]-'a']=1;
    }
    memset(dp,-1,sizeof dp);
    cout<<solve(0,29);
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