#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
   ll n,m;
   cin>>n>>m;
   map<string,ll>mp;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           string a;
           cin>>a;
           mp[a]++;
       }
   }
   set<string>s;
   for(auto x:mp)if(x.second==n)s.insert(x.first);
   cout<<s.size()<<endl;
   for(auto x:s)cout<<x<<endl;
}
int main()
{
//    FIO
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
