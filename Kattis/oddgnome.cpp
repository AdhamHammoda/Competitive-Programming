#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=1;i<n-1;i++)
   {
       if(arr[i]!=arr[i-1]+1)
       {
           cout<<i+1<<endl;
           return;
       }
   }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
