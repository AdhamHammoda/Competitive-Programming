#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 3:35 pm
void test_case()
{
  ll d1,d2,d3;
  cin>>d1>>d2>>d3;
  ll ans=min({2*(d1+d2),d1+d2+d3,2*(d1+d3),2*(d2+d3)});
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
