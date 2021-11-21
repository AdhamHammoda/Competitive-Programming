#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 10:21 pm
void test_case()
{
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    string s4="";
    for(int i=0;i<s1.size();i++)
    {
        s4.push_back(s1[i]);
    }
    for(int i=0;i<s2.size();i++)
    {
        s4.push_back(s2[i]);
    }
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    s3==s4?cout<<"YES":cout<<"NO";
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
