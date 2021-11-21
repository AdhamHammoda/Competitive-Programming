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
   deque<ll> dq;
   set<ll> s;
   for(int i=n-1;i>=0;i--)
   {
       if(s.find(arr[i])==s.end())dq.push_front(arr[i]),s.insert(arr[i]);
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
