#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 5:46 am
void test_case()
{
   ll n,k;
   cin>>n>>k;
   ll mxjoy=-1e18;
   while(n--)
   {
       ll f,t;
       cin>>f>>t;
       if(t>k)
       {
           mxjoy=max(mxjoy,f-t+k);
       }
       else mxjoy=max(mxjoy,f);
   }
   cout<<mxjoy;
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
