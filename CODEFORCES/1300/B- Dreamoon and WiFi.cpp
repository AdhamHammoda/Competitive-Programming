#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , probability
/// 7-21-2021 , 9:15 pm
ll binpow(ll a, ll b)
{
    if(b==0)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return ans*ans*a;
    else return ans*ans;
}
ll ans;
string s1,s2;
double solve(ll idx,ll k)
{
    if(idx==s2.size())
    {
        if(k==ans)return 1;
        return 0;
    }
    ll op1=0,op2=0,op3=0,op4=0;
    if(s2[idx]=='+')
    {
        op1=solve(idx+1,k+1);
    }
    else if(s2[idx]=='-')
    {
        op2=solve(idx+1,k-1);
    }
    else
    {
        op3=solve(idx+1,k+1);
        op4=solve(idx+1,k-1);
    }
    return op1+op2+op3+op4;
}
void test_case()
{
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')ans++;
        else ans--;
    }
    ll den=0;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]=='?')den++;
    }
    double num=solve(0,0);
    cout<<fixed<<setprecision(10)<<num/binpow(2,den);
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
