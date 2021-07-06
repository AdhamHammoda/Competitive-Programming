#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-6-2021 , 10:05 am
void test_case()
{
    ll k,n,w;
    cin>>k>>n>>w;
    ll ans=(w*(w+1)*k)/2 - n;
    ans<=0?cout<<0:cout<<ans;
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
