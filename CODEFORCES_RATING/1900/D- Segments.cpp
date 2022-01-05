#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n;
   cin>>n;
   pair<ll,ll> arr[n];
   for(int i=0;i<n;i++)
   {
       ll x,y;
       cin>>x>>y;
       if(x>y)swap(x,y);
       arr[i]={x,y};
   }
   sort(arr,arr+n);
   ll ind=0;
   vector<ll> ans;
   while(ind<n)
   {
       pair<ll,ll> p=arr[ind];
       bool tam=false;
       ll j=ind;
       while(j<n && max(p.first,arr[j].first)<=min(p.second,arr[j].second))
       {
           p={max(p.first,arr[j].first),min(p.second,arr[j].second)};
           tam=true,j++;
       }
       ans.push_back(p.first);
       j+=(!tam),ind=j;
   }
   cout<<ans.size()<<endl;
   for(auto x:ans)cout<<x<<" ";
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}