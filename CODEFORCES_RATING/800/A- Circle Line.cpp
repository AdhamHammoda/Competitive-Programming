#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 3:31 pm
void test_case()
{
  ll n;
  cin>>n;
  ll arr[n];
  ll cumsum[n+1];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  ll s,d;
  cin>>s>>d;
  cumsum[0]=0;
  for(int i=0;i<n;i++)
  {
      cumsum[i+1]=cumsum[i]+arr[i];
  }
  if(s>d)swap(s,d);
  ll ans=min(cumsum[d-1]-cumsum[s-1],cumsum[s-1]+cumsum[n]-cumsum[d-1]);
  cout<<ans;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
