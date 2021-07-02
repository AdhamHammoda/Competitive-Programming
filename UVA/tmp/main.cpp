#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 5:35 AM
void test_case()
{
   string s;
   cin>>s;
   char init='a';
   map<char,int>m;
   for(int i=0;i<26;i++)
   {
       m['a'+i]=i+1;
   }
   ll sum=0;
   for(int i=0;i<s.size();i++)
   {
       cout<<init<<" "<<abs(m[s[i]]-m[init])<<" "<<abs(m[init]-m['a'])+abs(m['z']-m[s[i]])<<endl;
       sum+=min(abs(m[s[i]]-m[init]),abs(m[s[i]]-m['a'])+abs(m['z']-m[init]));
       init=s[i];
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
