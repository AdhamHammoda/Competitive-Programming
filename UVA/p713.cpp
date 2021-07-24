#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-24-2021 , 2:15 pm
void test_case()
{
    string s1,s2;
    cin>>s1>>s2;
    while(s1[s1.size()-1]=='0' && s1.size())
    {
        s1.pop_back();
    }
    while(s1[s2.size()-1]=='0' && s2.size())
    {
        s2.pop_back();
    }
    string r="";
    ll cr=0;
    for(int i=0;i<max(s1.size(),s2.size());i++)
    {
        ll sum=0;
        if(i<s1.size())sum+=s1[i]-'0';
        if(i<s2.size())sum+=s2[i]-'0';
        sum+=cr;
        cr=sum/10;
        r.push_back('0'+sum%10);
    }
    if(cr)r.push_back('0'+cr);
    while(r[0]=='0' && r.size())
    {
        r.erase(0,1);
    }
    cout<<r<<endl;
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
