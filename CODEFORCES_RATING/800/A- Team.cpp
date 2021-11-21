#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 4:35 AM
void test_case()
{
    ll n;
    cin>>n;
    ll sum=0;
    while(n--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c;
        d=0;
        d+=a;
        d+=b;
        d+=c;
        sum+=(d>=2);
    }
    cout<<sum;
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
