#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 5:13 am
ll freq[2005];
ll cumsum[2005];
ll order[2005];
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   set<ll>s;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       freq[arr[i]]++;
       s.insert(arr[i]);
   }
   ll j=0;
   ll mx=0;
   cumsum[0]=freq[*s.begin()];
   for(auto x:s)
   {
       mx=max(mx,x);
       order[x]=j;
       if(j)cumsum[j]=cumsum[j-1]+freq[x];
       j++;
   }
   for(int i=0;i<n;i++)
   {
       cout<<cumsum[order[mx]]-cumsum[order[arr[i]]]+1<<" ";
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
