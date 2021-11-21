#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,k;
ll dp[200005][20];
vector<ll> v[200005][4];
ll solve(ll i,ll c)
{
    if(i==n)return 0;
    ll &ans=dp[i][c];
    if(ans!=-1)return ans;
    ll op1=0,op2=0,op3=0,op4=0,op5=0,op6=0;
    ans=solve(i+1,c);
    if(v[i][1].size()>=3)
    {
        ll f1=v[i][1][0],f2=v[i][1][1],f3=v[i][1][2];
        op1=solve(i+1,(c+3)%10)+f1+f2+f3;
        if(c+3>=10)op1+=f1;
    }
    if(v[i][1].size()>=2)
    {
        ll f1=v[i][1][0],f2=v[i][1][1];
        op2=solve(i+1,(c+2)%10)+f1+f2;
        if(c+2>=10)op2+=max(f1,f2);
    }
    if(!v[i][1].empty())
    {
        ll f1=v[i][1][0];
        op3=solve(i+1,(c+1)%10)+f1;
        if(c+1>=10)op3+=f1;
    }
    if(!v[i][1].empty() && !v[i][2].empty())
    {
        ll f1=v[i][1][0],f2=v[i][2][0];
        op4=solve(i+1,(c+2)%10)+f1+f2;
        if(c+2>=10)op4+=max(f1,f2);
    }
    if(!v[i][2].empty())
    {
        ll f1=v[i][2][0];
        op5=solve(i+1,(c+1)%10)+f1;
        if(c+1>=10)op5+=f1;
    }
    if(v[i][3].size())
    {
        ll f1=v[i][3][0];
        op6=solve(i+1,(c+1)%10)+f1;
        if(c+1>=10)op6+=f1;
    }
    return ans=max({ans,op1,op2,op3,op4,op5,op6});

}
void test_case()
{
    for(int i=0;i<200005;i++)for(int j=0;j<20;j++)dp[i][j]=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            ll a,b;
            cin>>a>>b;
            v[i][a].push_back(b);
        }
        if(v[i][1].size())sort(v[i][1].rbegin(),v[i][1].rend());
        if(v[i][2].size())sort(v[i][2].rbegin(),v[i][2].rend());
        if(v[i][3].size())sort(v[i][3].rbegin(),v[i][3].rend());
    }
    cout<<solve(0,0);
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
