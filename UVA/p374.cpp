#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-24-2021 , 1:10 pm
ll binpow(ll a,ll b,ll mod)
{
    if(b==0)return 1;
    ll ans=binpow(a,b/2,mod);
    if(b%2)return ((ans%mod * ans%mod)%mod * a%mod)%mod;
    else return (ans%mod * ans%mod)%mod;
}
ll b,p,m;
void test_case()
{
    ll ans=binpow(b,p,m);
    cout<<ans<<endl;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
//    t=1;
    while(cin>>b>>p>>m)
    {
        test_case();
    }
}
