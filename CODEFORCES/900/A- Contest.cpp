#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 10:40 pm
double func(double p,double t)
{
    return max({3.0*p/10.0 , p - t*p/250.0});
}
void test_case()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    ll misha=func(a,c);
    ll vasya=func(b,d);
    if(misha>vasya)
    {
        cout<<"Misha";
    }
    else if(misha<vasya)
    {
        cout<<"Vasya";
    }
    else cout<<"Tie";
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
