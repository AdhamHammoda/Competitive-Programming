#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 6:08 am
void test_case()
{
    ll n;
    cin>>n;
    if(n>=0)cout<<n;
    else
    {
        ll x=abs(n)%10;
        n/=10;
        ll y=abs(n)%10;
        n/=10;  
        ll ans=max(n*10-y,n*10-x);
        cout<<ans;
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
