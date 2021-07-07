#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 9:15 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll ans=n+m;
    string s1=to_string(n);
    string s2=to_string(m);
    string s3=to_string(ans);
    ll n1=0,n2=0, n3=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!='0')n1=10*n1 + (s1[i]-'0');
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]!='0')n2=10*n2 + (s2[i]-'0');
    }
    for(int i=0;i<s3.size();i++)
    {
        if(s3[i]!='0')n3=10*n3 + (s3[i]-'0');
    }
    n3==n1+n2?cout<<"YES":cout<<"NO";
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
