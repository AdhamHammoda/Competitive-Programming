#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 3:38 am
void test_case()
{
   ll n,m;
   cin>>n>>m;

   for(int i=1;i<=1000;i++)
   {
       n--;
       n+=(i%m==0);
       if(!n)
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
