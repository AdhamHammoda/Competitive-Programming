#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Geometry
/// 7-4-2021 , 1:50 am
void test_case()
{
    long double n,k;
    cin>>n>>k;
    long double x=0.0,y=0.0;
    cin>>x>>y;
    n--;
    long double sum=0.0;
    while(n--)
    {
        long double a,b;
        cin>>a>>b;
        sum+=hypot(a-x,b-y)/50.0;
        x=a;
        y=b;
    }
    sum*=k;
    cout<<fixed<<setprecision(10)<<sum;
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
