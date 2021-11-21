#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 2:53 AM
void test_case()
{
   ll n;
   cin>>n;
   ll m;
   cin>>m;
   set<ll>s;
   while(m--)
   {
       ll a;
       cin>>a;
       s.insert(a);
   }
   ll k;
   cin>>k;
   while(k--)
   {
       ll a;
       cin>>a;
       s.insert(a);
   }
   s.size()==n?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
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
