#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 9:34 am
void test_case()
{
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(s[i]-'0'==4 || s[i]-'0'==7);
    }
    (sum==4 || sum==7)?cout<<"YES":cout<<"NO";
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
