#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-27-2021 , 3:31 pm
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   ll c=0;
   for(int i=0;i<n;i++)
   {
       if(i && i+1<n)
       {
           if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
           {
               c++;
           }
           if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
           {
               c++;
           }
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
