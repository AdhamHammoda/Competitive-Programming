#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll c5=0,c2=0;
    ll m=n;
    while(m%5==0 || m%2==0)
    {
        if(m%5==0)m/=5,c5++;
        if(m%2==0)m/=2,c2++;
    }
    while(c2<k)
    {
        n*=2;
        c2++;
    }
    while(c5<k)
    {
        n*=5;
        c5++;
    }
    cout<<n;
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
