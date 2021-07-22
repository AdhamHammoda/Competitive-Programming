#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 7:48 pm
void test_case()
{
   ll n,a;
   cin>>n>>a;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   a--;
   ll c=(arr[a]==1);
   for(int j=1;j<n;j++)
   {
       if(a+j<n && a-j>=0)
       {
           c+=2*(arr[a+j]==1 && arr[a-j]==1);
       }
       else if(a+j<n && a-j<0)
       {
           c+=(arr[a+j]==1);
       }
       else if(a+j>=n && a-j>=0)
       {
           c+=(arr[a-j]==1);
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
