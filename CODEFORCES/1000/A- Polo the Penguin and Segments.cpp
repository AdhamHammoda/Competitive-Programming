#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-4-2021 , 3:14 am
void test_case()
{
   ll n,k;
   cin>>n>>k;
   ll sum=0;
   while(n--)
   {
       ll a,b;
       cin>>a>>b;
       sum+=b-a+1;
   }
   cout<<k*(sum/k + (sum%k>0)) - sum;
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
