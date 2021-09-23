#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll a,p;
bool iscomposite(ll x)
{
    for(ll i=2;i*i<=x;i++)
    {
        if(x%i==0)return 1;
    }
    return 0;
}
ll binpow(ll a,ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1)res=(res*a)%p;
        b>>=1;
        a=(a*a)%p;
    }
    return res;
}
void test_case()
{
    ll ans=binpow(a,p);
    cout<<(ans==a && iscomposite(p)?"yes":"no")<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>p>>a)
    {
        if(!a && !p)return 0;
        test_case();
    }
}
