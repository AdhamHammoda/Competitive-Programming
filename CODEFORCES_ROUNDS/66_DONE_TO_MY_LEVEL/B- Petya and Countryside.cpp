#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   ll ans=0;
   for(int i=0;i<n;i++)
   {
       ll c=1;
       if(arr[i]>=arr[i+1])
       {
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]<=arr[j-1])c++;
               else break;
           }
       }
       if(arr[i]>arr[i-1])
       {
           for(int j=i-1;j>=0;j--)
           {
               if(arr[j]<=arr[j+1])c++;
               else break;
           }
       }
       ans=max(ans,c);
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