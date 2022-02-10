#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n+1];
   for(int i=1;i<=n;i++)cin>>arr[i];
   ll st=0,en=0;
   for(int i=1;i<=n;i++)
   {
       if(arr[i]!=i)
       {
           st=i;
           break;
       }
   }
   for(int i=n;i>=1;i--)
   {
       if(arr[i]!=i)
       {
           en=i;
           break;
       }
   }
   for(int i=st;i<=en;i++)
   {
       if(i!=arr[en-i+st])cout<<"0 0",exit(0);
   }
   cout<<st<<" "<<en;
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