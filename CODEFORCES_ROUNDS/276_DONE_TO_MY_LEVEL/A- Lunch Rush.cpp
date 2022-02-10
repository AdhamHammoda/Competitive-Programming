#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
   ll n,k;
   cin>>n>>k;
   ll mx=-1e18;
   while(n--)
   {
       ll f,t;
       cin>>f>>t;
       if(t>k)mx=max(mx,f-t+k);
       else mx=max(mx,f);
   }
   cout<<mx;
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