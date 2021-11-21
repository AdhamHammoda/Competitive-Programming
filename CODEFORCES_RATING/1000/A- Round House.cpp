#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 1:57 am
void test_case()
{
   ll n,a,b;
   cin>>n>>a>>b;
   (a%n + b%n +n)%n?cout<<(a%n + b%n +n)%n:cout<<n;
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
