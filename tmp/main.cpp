#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll mod=1e9+7;
ll func(ll x)
{
    ll ans=1;
    for(ll i=1;i<=x;i++)
    {
        ans=(ans%mod * i%mod)%mod;
    }
    return ans;
}
void test_case()
{
    ll h,w,a,b;
    cin>>h>>w>>a>>b;
    ll ans=1;
    ll mod=1e9+7;
    ll fac1=func(h+w-2);
    ll fac2=func(h-1);
    ll fac3=func(w-1);
    ll fac4=func(a+b-2);
    ll fac5=func(a-1);
    ll fac6=func(b-1);
    ans=(fac2%mod *fac3%mod)%mod;
    ans=fac1/ans;
    ll ans2=(fac5%mod * fac6%mod)%mod;
    ans2=fac4/ans2;
    cout<<(ans%mod - ans2%mod +mod)%mod;
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
