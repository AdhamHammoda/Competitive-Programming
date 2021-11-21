#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   map<ll,ll> dp;
   ll ans=0,lst=0;
   for(int i=0;i<n;i++)
   {
       dp[arr[i]]=dp[arr[i]-1]+1;
       if(ans<dp[arr[i]])ans=dp[arr[i]],lst=arr[i];
   }
   deque<ll> dq;
   for(int i=n-1;i>=0;i--)
   {
       if(arr[i]==lst)dq.push_front(i+1),lst--;
   }
   cout<<dq.size()<<endl;
   for(auto x:dq)cout<<x<<" ";

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
