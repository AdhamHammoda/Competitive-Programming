#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 3:39 pm
void test_case()
{
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  sort(v.begin(),v.end());
  ll it=lower_bound(v.begin(),v.end(),5-k+1)-v.begin();
  cout<<it/3;
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
