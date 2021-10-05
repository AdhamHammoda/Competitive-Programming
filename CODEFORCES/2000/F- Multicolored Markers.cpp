#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll n=a+b;
    ll ans=4e18;
    set<ll> div1;
    set<ll> div2;
    for(ll i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            div1.insert(i);
            div1.insert(a/i);
        }
    }
    for(ll i=1;i*i<=b;i++)
    {
        if(b%i==0)
        {
            div2.insert(i);
            div2.insert(b/i);
        }
    }
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            auto tmp=(div1.lower_bound(i));
            if(*(tmp)>i)tmp--;
            if(a/(*tmp) <= n/i)ans=min(2LL*i+2LL*(n/i),ans);
        }
    }
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            auto tmp=(div2.lower_bound(i));
            if(*(tmp)>i)tmp--;
            if(b/(*tmp) <= n/i)ans=min(2LL*i+2LL*(n/i),ans);
        }
    }
    cout<<ans;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
