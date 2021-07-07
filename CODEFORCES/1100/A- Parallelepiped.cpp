#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-6-2021 , 10:25 pm
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans= sqrt(a*b*c);
    cout<<4*((ans/a)+(ans/b)+(ans/c));
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
