#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 4:02 AM
void test_case()
{
   ll n;
   cin>>n;
   map<string,ll>m;
   while(n--)
   {
       string a;
       cin>>a;
       m[a]++;
   }
   ll mx=0;
   string r;
   for(auto x:m)
   {
       if(mx<x.second)
       {
           mx=x.second;
           r=x.first;
       }
   }
   cout<<r;
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
