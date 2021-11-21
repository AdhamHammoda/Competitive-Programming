#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n;
    cin>>n;
    ll c=0;
    while(n%2==0)
    {
        c++;
        ll x=sqrt(n);
        if(x*x==n)
        {
            cout<<"YES"<<endl;
            return;
        }
        n/=2;
    }
    ll sq=sqrt(n);
    if(c && sq*sq==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
