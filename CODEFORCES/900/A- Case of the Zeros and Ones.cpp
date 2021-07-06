#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 6:37 am
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll sum0=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1+=(s[i]=='1');
        sum0+=(s[i]=='0');
    }
    cout<<abs(sum1-sum0);
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
