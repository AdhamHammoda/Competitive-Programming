#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n,m;
   cin>>n>>m;
   multiset<pair<ll,ll>>ms;
   for(int i=0;i<m;i++)
   {
       ll a,b;
       cin>>a>>b;
       ms.insert({-b,a});
   }
   ll k=0;
   for(auto x:ms)
   {
       ll ans=min(n,x.second);
       n-=ans;
       k+=-(x.first)*ans;
   }
   cout<<k;
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