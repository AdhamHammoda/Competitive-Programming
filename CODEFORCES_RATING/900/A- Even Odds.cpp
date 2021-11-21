#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Equation
/// 7-3-2021 , 7:11 pm
void test_case()
{
   ll n,k;
   cin>>n>>k;
   if(k>n/2 + n%2)
   {
       k-=(n/2) + n%2;
       cout<<2*k;
   }
   else cout<<2*k-1;
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
