#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 5:06 AM
/// isupper() AND islower() byh5rafo
void test_case()
{
    string s;
    string s1="";
    string s2="";
    ll c1=0;
    ll c2=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        s1.push_back(tolower(s[i]));
        s2.push_back(toupper(s[i]));
        c1+=(s[i]<='z' && s[i]>='a');
        c2+=(s[i]<='Z' && s[i]>='A');
    }
    c1>=c2?cout<<s1:cout<<s2;
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
