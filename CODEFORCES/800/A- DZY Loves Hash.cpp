#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 2:51 am
void test_case()
{
   ll p,n;
   cin>>p>>n;
   set<ll>s;
   ll indx=-1;
   for(int i=0;i<n;i++)
   {
       ll a;
       cin>>a;
       if(s.find(a%p)==s.end())s.insert(a%p);
       else if(indx==-1)indx=i+1;
   }
   cout<<indx;
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
