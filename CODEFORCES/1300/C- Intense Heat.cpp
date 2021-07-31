#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
long double mx(long double a, long double b){if(a<=b){return b;}else{return a;}}
int main()
{
   ll n,k;
   cin>>n>>k;
   vector<ll>v(n);
   vector<ll>freq(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
       if(i)freq[i]=v[i]+freq[i-1];
       else freq[i]=v[i];
   }
   long double maxx=0.0,sum=0.0;
   for(int u=k;u<=n;u++)
   {
       long double sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=v[i];
           if(i>=u-1)
           {
               long double tt=0.0;
               tt = sum / (double)u;
//               cout<<sum<<" "<<u<<" "<<tt<<endl;
               maxx=mx(maxx,tt);
               sum-=v[i-u+1];
           }
       }
   }
   cout<<fixed<<setprecision(10)<<maxx;
}