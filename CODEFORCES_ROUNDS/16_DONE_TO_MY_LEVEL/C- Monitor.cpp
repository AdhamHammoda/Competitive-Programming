#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll gc=__gcd(c,d);
    c/=gc;
    d/=gc;
    ll ans = a/c;
    ll ans2 = b/d;
    ll mx=min(ans,ans2);
    if(mx)cout<<c*mx<<" "<<d*mx;
    else cout<<0<<" "<<0;
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