#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool seg[3000];
void test_case()
{
    ll q,n;
   cin>>q>>n;
   while(q--)
   {
       ll a,b;
       cin>>a>>b;
       for(int i=a;i<=b;i++)
       {
           seg[i]=1;
       }
   }
   set<ll>s;
   for(int i=1;i<=n;i++)
   {
       if(!seg[i])
       {
           s.insert(i);
       }
   }
   cout<<s.size()<<endl;
   for(auto x:s)cout<<x<<" ";
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}