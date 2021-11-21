#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-4-2021 , 2:30 am
void test_case()
{
   string s;
   cin>>s;
   map<char,ll>m;
   map<ll,char>invm;
   for(int i=0;i<=9;i++)
   {
       m['0'+i]=i;
       invm[i]='0'+i;
   }
   for(int i=0;i<s.size();i++)
   {
       if(!i && s[i]=='9')continue;
       if(m[s[i]]>=5)
       {
           s[i]=invm[m['9']-m[s[i]]];
       }
   }
   cout<<s;
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
