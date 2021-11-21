#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n,k;
   cin>>n>>k;
   ll arr[n];
   set<pair<ll,ll>>s;
   ll sum=0;
   for(int i=0;i<n;i++)cin>>arr[i],s.insert({-arr[i],-i});
   ll ind=0;
   vector<ll> pos;
   for(auto x:s)
   {
       if(ind==k)break;
       pos.push_back(-x.second);
       sum+=-x.first;
       ind++;
   }
   cout<<sum<<endl;
   sort(pos.begin(),pos.end());
   sum=0;
   vector<ll> ans;
   for(int i=0;i<pos.size();i++)
   {
       if(i)ans.push_back(pos[i]-pos[i-1]),sum+=pos[i]-pos[i-1];
       else ans.push_back(pos[i]+1),sum+=pos[i]+1;
   }
   if(sum!=n)
   {
       sum-=ans.back();
       ans.pop_back();
       ans.push_back(n-sum);
   }
   for(auto x:ans)cout<<x<<" ";
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
