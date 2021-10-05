#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   ll mx=0,ind=0;
   bool ntr=false;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(mx<arr[i])
       {
           mx=arr[i];
           ind=i;
       }
       if(i)ntr+=(arr[i]<arr[i-1]);
   }
   if(!ntr)
   {
       cout<<0;
       return;
   }
   for(int i=1;i<ind;i++)
   {
       if(arr[i]<arr[i-1])
       {
           cout<<-1;
           return;
       }
   }
   ll ind2=0;
   bool tr=false;
   arr[n]=1e18;
   for(int i=ind+1;i<n;i++)
   {
       if(arr[i]!=mx && !tr)tr=true,ind2=i;
       if(tr && (arr[i]>arr[i+1] || arr[i]>arr[0]))
       {
           cout<<-1;
           return;
       }
   }
   cout<<(n-ind2);
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
