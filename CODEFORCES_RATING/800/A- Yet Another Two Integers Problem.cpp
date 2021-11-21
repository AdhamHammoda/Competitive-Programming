#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
         ll a,b;
         cin>>a>>b;
         ll c= abs(a-b);
         c?cout<<(c/10)+(c%10>0)<<endl:cout<<0<<endl;
     }
}