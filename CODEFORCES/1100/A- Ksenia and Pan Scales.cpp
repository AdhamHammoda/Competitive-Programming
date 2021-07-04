#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-4-2021 , 2:22 am
void test_case()
{
   string s1;
   string s2;
   cin>>s1>>s2;
   deque<char>dq;
   for(int i=0;i<s2.size();i++)dq.push_back(s2[i]);
   string r1="";
   string r2="";
   bool vis=false;
   for(int i=0;i<s1.size();i++)
   {
       if(s1[i]=='|')
       {
           vis=true;
           continue;
       }
       if(!vis)
       {
           r1.push_back(s1[i]);
       }
       else
       {
           r2.push_back(s1[i]);
       }
   }
   ll sum=r2.size() + r1.size() + s2.size();
   if(sum%2==0 && r1.size()<=sum/2 && r2.size()<=sum/2)
   {
       cout<<r1;
       for(int i=r1.size();i<sum/2;i++)
       {
           cout<<dq.front();
           dq.pop_front();
       }
       cout<<"|"<<r2;
       for(int i=r2.size();i<sum/2;i++)
       {
           cout<<dq.front();
           dq.pop_front();
       }
   }
   else cout<<"Impossible";
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
