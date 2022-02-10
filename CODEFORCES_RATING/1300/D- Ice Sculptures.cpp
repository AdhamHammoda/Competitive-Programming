#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll mx=-1e18;
    ll n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    set<ll> divisors;
    for(ll i=1;i<=n;i++)
    {
        if(n/i>=3 && n%i==0)divisors.insert(i);
    }
    for(auto x:divisors)
    {
        for(int i=1;i<=x;i++)
        {
            ll sum=0;
            for(ll j=i;j<=n;j+=x)sum+=arr[j];
            mx=max(mx,sum);
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