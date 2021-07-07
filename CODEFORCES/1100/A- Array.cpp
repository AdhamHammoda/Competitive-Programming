#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 11:20 pm
void test_case()
{
   deque<ll>v1;
   deque<ll>v2;
   deque<ll>v3;
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(arr[i]<0)v1.push_back(arr[i]);
       else if(arr[i]>0)v2.push_back(arr[i]);
       else v3.push_back(arr[i]);
   }
   if(!v2.size())
   {
       v2.push_back(v1.back());
       v1.pop_back();
       v2.push_back(v1.back());
       v1.pop_back();
   }
   if(v1.size()%2==0)
   {
       v3.push_back(v1.front());
       v1.pop_front();
   }
   cout<<v1.size()<<" ";
   for(auto x:v1)cout<<x<<" ";
   cout<<endl;
   cout<<v2.size()<<" ";
   for(auto x:v2)cout<<x<<" ";
   cout<<endl;
   cout<<v3.size()<<" ";
   for(auto x:v3)cout<<x<<" ";
   cout<<endl;
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
