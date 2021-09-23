#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,m;
void test_case()
{
   multiset<ll> ms;
   for(int i=0;i<n;i++)
   {
       ll a;
       cin>>a;
       ms.insert(a);
   }
   ll c=0;
   for(int i=0;i<m;i++)
   {
       ll a;
       cin>>a;
       if(ms.find(a)!=ms.end())
       {
           c++;
           ms.erase(ms.find(a));
       }
   }
   cout<<c<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>n>>m)
    {
        if(!n && !m)return 0;
        test_case();
    }
}
