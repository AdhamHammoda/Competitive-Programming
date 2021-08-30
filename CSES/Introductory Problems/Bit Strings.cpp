#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll mod=1e9+7;
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return (ans%mod * ans%mod)* a%mod;
    else return (ans%mod * ans%mod)%mod;
}
void test_case()
{
    ll n;
    cin>>n;
    cout<<binpow(2,n);
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
