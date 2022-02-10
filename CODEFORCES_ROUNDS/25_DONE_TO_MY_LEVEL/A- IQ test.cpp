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
   for(int i=1;i+1<n;i++)
   {
       if(arr[i]%2!=arr[i-1]%2)
       {
           if(arr[i]%2==arr[i+1]%2)cout<<i,exit(0);
           else cout<<i+1,exit(0);
       }
   }
   cout<<n;
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