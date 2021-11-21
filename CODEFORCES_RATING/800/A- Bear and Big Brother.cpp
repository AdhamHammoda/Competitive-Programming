#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , equation
/// 7-2-2021 , 4:31 AM
void test_case()
{
    double x,y;
    cin>>x>>y;
    ll ans = - log(x/y) / log(3.0/2.0);
    cout<<ans+1;
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
