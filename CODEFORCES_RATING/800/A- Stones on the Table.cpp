#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 5:26 AM
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(i)sum+=(s[i-1]==s[i]);
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
