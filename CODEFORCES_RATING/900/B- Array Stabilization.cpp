#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   set<ll>s;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];

   }
   sort(arr,arr+n);
   cout<<min({arr[n-2]-arr[0],arr[n-1]-arr[1]});
}

int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}