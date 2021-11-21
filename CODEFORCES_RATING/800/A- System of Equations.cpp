#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 2:20 am
void test_case()
{
  ll n,m;
  cin>>n>>m;
  ll mx=max(n,m);
  ll mn=min(n,m);
  ll c=0;
  for(int i=0;i<=mx;i++)
  {
      for(int j=0;j<=mx;j++)
      {
          if(i*i+j==n && j*j+i==m)  
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
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
