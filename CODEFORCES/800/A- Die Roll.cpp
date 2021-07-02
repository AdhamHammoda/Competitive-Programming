#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation, maths
/// 7-2-2021 , 5:15 PM
void test_case()
{
   ll a,b;
   cin>>a>>b;
   ll m=6-max(a,b)+1;
   cout<<m/__gcd(m,6LL)<<"/"<<6/__gcd(m,6LL);
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
