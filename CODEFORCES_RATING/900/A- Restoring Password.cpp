#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 5:57 am
void test_case()
{
   string s;
   cin>>s;
   map<string,ll>mp;
   for(int i=0;i<10;i++)
   {
       string r;
       cin>>r;
       mp[r]=i;
   }
   for(int i=0;i<80;i+=10)
   {
       cout<<mp[s.substr(i,10)];
   }
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
