#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Number Theory
/// 7-28-2021 , 2:57 am
void test_case()
{
    ll n;
    cin>>n;
    n%2?cout<<9<<" "<<n-9:cout<<4<<" "<<n-4;
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
