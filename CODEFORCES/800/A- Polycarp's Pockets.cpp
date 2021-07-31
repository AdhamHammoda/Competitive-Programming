#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll freq[200];
int main()
{
   ll n;
   cin>>n;
    ll mx=0;
   for(int i=0;i<n;i++)
   {
       ll a;
       cin>>a;
       freq[a]++;
       mx=max({mx,freq[a]});
   }
   cout<<mx;
}