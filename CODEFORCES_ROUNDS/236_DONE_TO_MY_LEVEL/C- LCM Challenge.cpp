#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll mx=0;
    for(ll i=n-6;i<=n;i++)
    {
        for(ll j=n-6;j<=n;j++)
        {
            for(ll k=n-6;k<=n;k++)
            {
                if(i<=0 || j<=0 || k<=0)continue;
                ll lc=i*j/__gcd(i,j);
                lc=lc*k/__gcd(lc,k);
                mx=max(mx,lc);
            }
        }
    }
    cout<<mx;
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