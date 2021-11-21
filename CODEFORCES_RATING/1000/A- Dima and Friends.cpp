#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-14-2021 , 12:35 am
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }
   ll ans=0;
   for(int i=1;i<=5;i++)
   {
       if((i+sum)%(n+1)!=1)
       {
           ans++;
       }
   }
   cout<<ans;
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
