#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Sorting
/// 7-2-2021 , 4:44 AM
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n]={0};
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   for(auto x:arr)cout<<x<<" ";
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
