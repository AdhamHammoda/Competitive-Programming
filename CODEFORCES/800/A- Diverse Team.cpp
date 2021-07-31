#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;

int main() {
    FIO
    ll n, k ;
    cin>>n>>k;
    ll arr[n];
    set<ll> s1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s1.insert(arr[i]);
    }
   if(s1.size()<k)cout<<"NO";
   else
   {
       cout<<"YES"<<endl;
       set<ll>s2;
       ll c=0;
       for(int i=0;i<n;i++)
       {
           if(c==k)break;
           if(s2.find(arr[i])==s2.end())
           {
               s2.insert(arr[i]);
               cout<<i+1<<" ";
               c++;
           }
       }
   }
}