#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   ll mx=0,c=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(i)
       {
           if(arr[i]>arr[i-1])c++;
           else mx=max(mx,c),c=0;
       }
   }
   cout<<max(mx,c)+1;
}
int main()
{
//    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
