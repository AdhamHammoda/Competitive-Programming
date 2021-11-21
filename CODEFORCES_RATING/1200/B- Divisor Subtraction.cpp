#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n;
    cin>>n;
    ll d=0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            d=i;
            break;
        }
    }
    if(d)cout<<(n-d)/2 +1;
    else cout<<1;
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
