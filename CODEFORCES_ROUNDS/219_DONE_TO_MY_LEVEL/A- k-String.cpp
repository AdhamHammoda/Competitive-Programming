#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll n=s.size();
    if(n%k)cout<<-1,exit(0);
    map<char,ll>m;
    for(auto x:s)m[x]++;
    string r="";
    for(auto x:m)
    {
        if(x.second%k)cout<<-1,exit(0);
        r+=string((ll)x.second/k,x.first);
    }
    for(int i=0;i<k;i++)cout<<r;
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