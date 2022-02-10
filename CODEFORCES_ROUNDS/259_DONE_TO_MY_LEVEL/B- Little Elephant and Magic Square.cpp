#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
   ll a,b,c,d,e,f,g,h,I;
   cin>>a>>b>>c>>d>>e>>f>>g>>h>>I;
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
    FIO
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