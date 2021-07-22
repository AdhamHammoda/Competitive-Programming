#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 8:48 pm
void test_case()
{
    ll n;
    cin>>n;
    string s="ROYGBIV";
    string y="GBIV";
    string r="";
    for(int i=0;i<n/7;i++)
    {
        r+=s;
    }
    for(int i=0;i<n%7;i++)
    {
        r+=(y[i%4]);
    }
    cout<<r;
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
