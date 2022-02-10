#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll sz=s.size();
   string r="";
   if(sz%2)r+=s.substr(0,3),s.erase(0,1),s.erase(0,1),s.erase(0,1);
   for(int i=1;i<s.size();i+=2)
   {
       if(r.size())r+="-";
       r+=s[i-1];
       r+=s[i];
   }
   cout<<r;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}