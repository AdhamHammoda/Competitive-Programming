#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:36 pm
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll tmp=0;
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)tmp+=(s[j]=='4' || s[j]=='7');
        sum+=(tmp<=k);
    }
    cout<<sum;
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
