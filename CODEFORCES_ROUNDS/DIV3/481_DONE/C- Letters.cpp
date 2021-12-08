#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n,k;
   cin>>n>>k;
   ll arr[n];
   ll cum[n+1]={0};
   for(int i=0;i<n;i++)cin>>arr[i],cum[i+1]+=cum[i]+arr[i];
   while(k--)
   {
       ll a;
       cin>>a;
       ll it=lower_bound(cum,cum+n+1,a)-cum;
       cout<<it<<" "<<a-cum[it-1]<<endl;
   }
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
