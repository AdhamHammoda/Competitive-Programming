#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 10:18 pm
ll func(string s)
{
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u');
    }
    return sum;
}
void test_case()
{
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    ll sum=0;
    bool t1=false;
    bool t2=false;
    bool t3=false;
    t1=(func(s1)==5);
    t2=(func(s2)==7);
    t3=(func(s3)==5);
    if(t1 && t2 && t3)cout<<"YES";
    else cout<<"NO";
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
