#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
   ll n;
   cin>>n;
   set<ll>s;
   for(ll i=2;i*i<=n;i++)
   {
       if(n%i==0)
       {
           s.insert(i);
           s.insert(n/i);
       }
   }
   if(s.size())cout<<n-(*s.rbegin());
   else cout<<n-1;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
