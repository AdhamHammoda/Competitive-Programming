#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll i=0;
    while(true)
    {
        ll g1=__gcd(a,n);
        ll g2=__gcd(b,n);
        if(i%2)
        {
            if(g2>n)
            {
                cout<<0;
                return;
            }
            n-=g2;
        }
        else
        {
            if(g1>n)
            {
                cout<<1;
                return;
            }
            n-=g1;
        }
        i++;
    }
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
