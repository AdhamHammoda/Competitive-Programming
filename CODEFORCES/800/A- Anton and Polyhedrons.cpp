#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-3-2021 , 4:31 AM
void test_case()
{
   map<string,ll>m;
   m["Tetrahedron"]=4;
   m["Cube"]=6;
   m["Octahedron"]=8;
   m["Dodecahedron"]=12;
   m["Icosahedron"]=20;
   ll n;
   cin>>n;
   ll sum=0;
   while(n--)
   {
       string a;
       cin>>a;
       sum+=m[a];
   }
   cout<<sum;
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
