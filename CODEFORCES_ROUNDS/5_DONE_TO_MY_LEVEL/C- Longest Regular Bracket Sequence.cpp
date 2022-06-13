#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    string s;
    cin>>s;
    map<ll,ll> m;
    ll bal=0;
    ll c=0;
    for(int i=0;i<s.size();i++)
    {
        ll tmp=1;
        if(s[i]==')')tmp=-1;
        bal+=tmp;
        c++;
        if(bal==0)m[c]++;
        if(bal<0)c=0,bal=0;
    }
    ll mx=0,val=0;
    for(auto x:m)mx=max(mx,x.first);
    val=m[mx];
    m.clear();
    c=0;
    bal=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        ll tmp=1;
        if(s[i]=='(')tmp=-1;
        bal+=tmp;
        c++;
        if(bal==0)m[c]++;
        if(bal<0)c=0,bal=0;
    }
    for(auto x:m)
    {
        if(mx<x.first)mx=x.first,val=x.second;
    }
    cout<<mx<<" "<<(val?val:1);
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}