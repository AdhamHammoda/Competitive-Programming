#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 9:16 pm
void test_case()
{
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   ll posg=-1,post=-1;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='G')posg=i;
       if(s[i]=='T')post=i;
   }
   ll vis1=-1,vis2=-1;
   for(int i=min(posg,post);i<=max(posg,post);i+=k)
   {
       if(s[i]=='#')
       {
           cout<<"NO";
           return;
       }
       if(s[i]=='G')vis1=i;
       if(s[i]=='T')vis2=i;
   }
   if(vis1!=-1 && vis2!=-1)cout<<"YES";
   else cout<<"NO";
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
