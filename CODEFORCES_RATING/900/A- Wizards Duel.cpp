#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 5:00 am
void test_case()
{
   double n,a,b;
   cin>>n>>a>>b;
   b==a?cout<<n/2:cout<<(a*n)/(b+a);
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
