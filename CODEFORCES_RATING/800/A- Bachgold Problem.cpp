#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Number Theory
/// 7-28-2021 , 3:00 am
void test_case()
{
    ll n;
    cin>>n;
    cout<<(n/2)<<endl;
    while(n>0)
    {
        if(n%2)cout<<3<<" ",n-=3;
        else cout<<2<<" ",n-=2;
    }
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
