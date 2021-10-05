#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
   ll arr[3][3];
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           cin>>arr[i][j];
       }
   }
   ll a=arr[0][0],b=arr[0][1],c=arr[0][2];
   ll d=arr[1][0],e=arr[1][1],f=arr[1][2];
   ll g=arr[2][0],h=arr[2][1],I=arr[2][2];
   for(int i=1;i<=1e5;i++)
   {
       ll sum=(g+h+i);
       ll ans1=sum-(d+f);
       ll ans2=sum-(b+c);
       if(i+ans1+ans2==sum && ans1>0 && ans2>0)
       {
           cout<<ans2<<" "<<b<<" "<<c<<endl;
           cout<<d<<" "<<ans1<<" "<<f<<endl;
           cout<<g<<" "<<h<<" "<<i<<endl;
           return;
       }
       sum=(d+f+i);
       ans1=sum-(g+h);
       ans2=sum-(b+c);
       if(i+ans1+ans2==sum && ans1>0 && ans2>0)
       {
           cout<<ans2<<" "<<b<<" "<<c<<endl;
           cout<<d<<" "<<i<<" "<<f<<endl;
           cout<<g<<" "<<h<<" "<<ans1<<endl;
           return;
       }
       sum=(b+c+i);
       ans1=sum-(d+f);
       ans2=sum-(g+h);
       if(i+ans1+ans2==sum && ans1>0 && ans2>0)
       {
           cout<<i<<" "<<b<<" "<<c<<endl;
           cout<<d<<" "<<ans1<<" "<<f<<endl;
           cout<<g<<" "<<h<<" "<<ans2<<endl;
           return;
       }
   }
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
