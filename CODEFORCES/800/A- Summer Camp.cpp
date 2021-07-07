#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 8:01 pm
void test_case()
{
   string r="";
   for(int i=1;i<=5000;i++)
   {
       r+=to_string(i);
   }
   ll n;
   cin>>n;
   cout<<r[n-1];
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
