#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 8:04 pm
void test_case()
{
   ll n;
   cin>>n;
   bool unrated=true;
   bool maybe=true;
   ll lsta=1e9,lstb=1e9;
   while(n--)
   {
       ll a,b;
       cin>>a>>b;

       if(a!=b)unrated=false;
       if(lsta<a && lstb<b)maybe=false;
       lsta=a;
       lstb=b;
   }
   if(!unrated)cout<<"rated"<<endl;
   else
   {
       if(maybe)cout<<"maybe"<<endl;
       else cout<<"unrated"<<endl;
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
