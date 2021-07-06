#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-6-2021 , 8:41 am
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll mx=max(a,b);
    ll mn=min(a,b);
    ll ans=min(mx,mn+c);
    c-=ans-mn;
    cout<<2*ans + c - c%2;
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
