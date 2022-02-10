#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           for(int k=0;k<n;k++)
           {
               if(i!=j && j!=k && i!=k && arr[i]+arr[j]==arr[k])cout<<k+1<<" "<<i+1<<" "<<j+1,exit(0);
           }
       }
   }
   cout<<-1;
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