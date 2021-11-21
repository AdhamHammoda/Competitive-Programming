#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll c=0;
    while(n>0 && m>0)
    {
        ll mx=max(n,m);
        ll mn=min(n,m);
        c+=(mx/mn);
        mx-=(mx/mn)*mn;
        m=mn;n=mx;
    }
    cout<<c<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}
