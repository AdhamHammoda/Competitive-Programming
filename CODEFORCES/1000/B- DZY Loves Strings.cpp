#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll k;
    cin>>k;
    map<char,ll>m;
    ll mx=0;
    for(int i=0;i<26;i++)
    {
        ll a;
        cin>>a;
        m['a'+i]=a;
        mx=max(mx,a);
    }
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=m[s[i]]*(i+1);
    }
    for(int i=s.size()+1;i<=s.size()+k;i++)
    {
        sum+=mx*i;
    }
    cout<<sum;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
