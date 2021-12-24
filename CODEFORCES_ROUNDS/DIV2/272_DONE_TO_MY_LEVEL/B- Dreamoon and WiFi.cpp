#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll all=0;
ll n;
string s1,s2;
double solve(ll idx,ll rem)
{
    if(idx==s2.size())
    {
        if(rem==all)return 1.0;
        else return 0.0;
    }
    ll op1=0,op2=0,op3=0,op4=0;
    if(s2[idx]=='+')op1=solve(idx+1,rem+1);
    if(s2[idx]=='-')op2=solve(idx+1,rem-1);
    if(s2[idx]=='?')
    {
        op3=solve(idx+1,rem+1);
        op4=solve(idx+1,rem-1);
    }
    return op1+op2+op3+op4;
}

void test_case()
{
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)all+=(s1[i]=='+'),all-=(s1[i]=='-');
    ll c=0;
    for(int i=0;i<s2.size();i++)c+=(s2[i]=='?');
    double ans=solve(0,0);
    cout<<fixed<<setprecision(10)<<ans/(double)(1LL<<c);
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