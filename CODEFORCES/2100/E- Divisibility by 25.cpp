#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
int main()
{
    //FIO
   string s;
   cin>>s;
   ll arr[10]={0,0,0,0,0,0,0,0,0,0};
   for(int i=0;i<s.size();i++)
   {
       arr[s[i]-'0']++;
   }
   ll dst00=0,dst25=0,dst50=0,dst75=0;
   ll sz=s.size();
   bool d1=false;
   bool d2=false;
   bool d3=false;
   bool d4=false;
   if(arr[0]>=2)
   {
       d1=true;
       ll c=0;
       ll dst1=0,dst2=0;
       for(int i=sz-1;i>=0;i--)
       {
           if(s[i]=='0' && c==0)
           {
               dst1=sz-1-i;
               c++;
           }
           else if(s[i]=='0' && c==1)
           {
               dst2=sz-2-i;
               c++;
           }
       }
       if(dst2==-1 && dst1>=1)dst00=dst1;
       else if(dst1>dst2)dst00=dst1+dst2+1;
       else dst00=dst2+dst1;
   }
    if(arr[2]>=1 && arr[5]>=1)
   {
       d2=true;
       bool r2=false;
       bool r5=false;
       ll dst2=0,dst5=0;
       for(int i=sz-1;i>=0;i--)
       {
           if(s[i]=='5' && !r5)
           {
               r5=true;
               dst5=sz-1-i;
           }
           else if(s[i]=='2' && !r2)
           {
               r2=true;
               dst2=sz-2-i;
           }
       }
       if(dst2==-1 && dst5>=1)dst25=dst5;
       else if(dst5>dst2)dst25=dst5+dst2+1;
       else dst25=dst2+dst5;
    if(dst5==sz-1 && s[1]=='0')
    {
        ll c=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0')c++;
            else break;
        }
        dst25+=c;
    }
   }
    if(arr[5]>=1 && arr[0]>=1)
   {
       d3=true;
       bool r5=false;
       bool r0=false;
       ll dst0=0,dst5=0;
       for(int i=sz-1;i>=0;i--)
       {
           if(s[i]=='0' && !r0)
           {
               r0=true;
               dst0+=sz-1-i;
           }
           else if(s[i]=='5' && !r5)
           {
               r5=true;
               dst5+=sz-2-i;
           }
       }
         if(dst5==-1 && dst0>=1)dst50=dst0;
       else if(dst0>dst5)dst50=dst0+dst5+1;
       else dst50=dst5+dst0;
   }
    if(arr[7]>=1 && arr[5]>=1)
   {
       d4=true;
       bool r7=false;
       bool r5=false;
       ll dst7=0,dst5=0;
       for(int i=sz-1;i>=0;i--)
       {
           if(s[i]=='5' && !r5)
           {
               r5=true;
               dst5=sz-1-i;
           }
           else if(s[i]=='7' && !r7)
           {
               r7=true;
               dst7=sz-2-i;
           }
       }
         if(dst7==-1 && dst5>=1)dst75=dst5;
       else if(dst5>dst7)dst75=dst5+dst7+1;
       else dst75=dst7+dst5;
         if(dst5==sz-1 && s[1]=='0')
    {
        ll c=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0')c++;
            else break;
        }
        dst75+=c;
    }
   }
   if(!d1 && !d2 && !d3 && !d4)
   {
       cout<<-1;
   }
   else
   {
       set<ll>ss;
      if(d1)ss.insert(dst00);
      if(d2)ss.insert(dst25);
      if(d3)ss.insert(dst50);
      if(d4)ss.insert(dst75);
      cout<<*ss.begin();
   }

}