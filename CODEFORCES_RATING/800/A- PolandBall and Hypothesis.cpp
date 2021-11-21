#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-27-2021 , 5:21 pm
void test_case()
{
    ll n;
    cin>>n;
    if(n==1)cout<<3;
    else if(n==2)cout<<4;
    else n%2?cout<<1:cout<<n-2;
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
