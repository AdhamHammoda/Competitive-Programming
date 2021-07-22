#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-18-2021 , 10:04 pm
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n+1];
   ll sum=0;
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }
   ll x,y;
   cin>>x>>y;
   ll g1=0,g2=sum,c=0;
   for(int i=1;i<=n;i++)
   {
       g1+=arr[i];
       g2-=arr[i];
       if((g1<=y &&  g1>=x) && (g2<=y && g2>=x))
       {
           c=i+1;
           cout<<i+1;
           return;
       }
   }
   cout<<c;
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
