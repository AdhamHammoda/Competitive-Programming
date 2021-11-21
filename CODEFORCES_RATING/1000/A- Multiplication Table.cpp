#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 5:07 pm
void test_case()
{
   ll n,x;
   cin>>n>>x;
   set<ll>s;
   for(int i=1;i*i<=x;i++)
   {
       if(x%i==0 && i<=n && x/i<=n)
       {
           s.insert(x/i);
           s.insert(i);
       }
   }
   cout<<s.size();
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
