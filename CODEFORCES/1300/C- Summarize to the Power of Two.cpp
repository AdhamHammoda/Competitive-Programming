#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
ll bexp(ll a, ll b)
{
    if(b==0)return 1;
    ll res=bexp(a,b/2);
    if(b%2) return res*res*a;
    else return res*res;
}
void test_case()
{
    map<ll,ll>freq;
    ll powers2[63];
    for(int i=0;i<63;i++)
    {
        powers2[i]=bexp(2,i);
    }
   set<ll>s;
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       s.insert(arr[i]);
       freq[arr[i]]++;
   }
   map<ll,pair<bool,bool>> vis;
   ll c=0;
   for(int i=0;i<n;i++)
   {
       if(!vis[arr[i]].second)
       {
           bool f=false;
           for(int j=0;j<63;j++)
           {
               if(s.find(powers2[j]-arr[i])!=s.end())
               {
                   if(powers2[j]==2*arr[i] && freq[arr[i]]>1)f=true;
                   else if(powers2[j]!=2*arr[i]) f=true;
                   if(f)break;
               }
           }
           vis[arr[i]]={f,1};
           if(!f)c++;
       }
       else
       {
           if(vis[arr[i]].first==0)
           {
               c++;
           }
       }
   }
   cout<<c;
}
int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}