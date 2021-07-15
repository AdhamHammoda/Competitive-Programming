#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-9-2021 , 4:33 am
void test_case()
{
   ll n;
   cin>>n;
   vector<ll>v;
   vector<ll>cumsum(1,0);
   for(int i=1;i<=n;i++)
   {
       v.push_back(i*(i+1)/2);
       cumsum.push_back(v[v.size()-1]+cumsum[cumsum.size()-1]);
   }
   cout<<upper_bound(cumsum.begin(),cumsum.end(),n)-cumsum.begin()-1;
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
