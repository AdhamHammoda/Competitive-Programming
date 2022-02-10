#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    if(6*n<=a*b)cout<<a*b<<endl<<a<<" "<<b,exit(0);
    ll ans=1e18;
    ll na=0,nb=0;
    for(ll i=a;i*i<=6*n;i++)
    {
        ll tmpb=6*n/i+((6*n)%i>=1);
        if(tmpb<b)continue;
        if(i*tmpb<=ans)
        {
            ans=i*tmpb;
            na=i,nb=tmpb;
        }
    }
    for(ll i=b;i*i<=6*n;i++)
    {
        ll tmpa=6*n/i+((6*n)%i>=1);
        if(tmpa<a)continue;
        if(i*tmpa<=ans)
        {
            ans=i*tmpa;
            na=tmpa,nb=i;
        }
    }
    cout<<na*nb<<endl;
    cout<<na<<" "<<nb;
}
int main()
{
    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}