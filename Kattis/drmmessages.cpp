#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll sum=0,sum2=0;
    ll n=s.size()/2;
    for(int i=0;i<n;i++)
    {
        ll tmp=s[i]-'A';
        sum+=tmp;
    }
    for(int i=n;i<2*n;i++)
    {
        ll tmp=s[i]-'A';
        sum2+=tmp;
    }
    string s1="",s2="";
    for(int i=0;i<n;i++)
    {
        ll ans=s[i]-'A';
        char a=((ans+sum)%26  + 'A');
        s1+=a;
    }
    for(int i=n;i<2*n;i++)
    {
        ll ans=s[i]-'A';
        char a=((ans+sum2)%26  + 'A');
        s2+=a;
    }
    for(int i=0;i<n;i++)
    {
        char a = ((s1[i]-'A')+(s2[i]-'A'))%26  + 'A';
        cout<<a;
    }
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
