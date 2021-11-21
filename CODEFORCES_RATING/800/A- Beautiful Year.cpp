#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 7:27 pm
void test_case()
{
   ll n;
   cin>>n;
   for(int i=n+1;i<=9999;i++)
   {
       set<ll>s;
       ll m=i;
       while(m>0)
       {
           s.insert(m%10);
           m/=10;
       }
       if(s.size()==4)
       {
           cout<<i;
           break;
       }
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
