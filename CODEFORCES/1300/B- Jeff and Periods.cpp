#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   map<ll,vector<ll>>m;
   for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]].push_back(i);
   vector<pair<ll,ll>>ans;
   for(auto x:m)
   {
       vector<ll>vec = x.second;
       ll diff=0;
       if(vec.size()<=2)
       {
           ans.push_back({x.first,(vec.size()>1?vec[1]-vec[0]:0)});
           continue;
       }
       diff=vec[1]-vec[0];
       bool tr=true;
       for(int i=2;i<vec.size();i++)
       {
           if(vec[i]-vec[i-1]!=diff)
           {
               tr=false;
               break;
           }
       }
       if(tr)ans.push_back({x.first,diff});
   }
   cout<<ans.size()<<endl;
   for(auto x:ans)cout<<x.first<<" "<<x.second<<endl;
}
int main()
{
//    FIO
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
