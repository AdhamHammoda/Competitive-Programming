#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Equation , Geometry
/// 7-4-2021 , 5:31 am
void test_case()
{
    long double d,h,v,e;
    cin>>d>>h>>v>>e;
    long double r=d/2;
    long double pi = acos(-1);
    long double t=(pi*r*r*h/v)/(1.0-pi*r*r*e/v);
    if(t<0)cout<<"NO";
    else cout<<"YES"<<endl<<fixed<<setprecision(10)<<t;
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
