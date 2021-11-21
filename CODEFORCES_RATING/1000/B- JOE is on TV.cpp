#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    long double sum=0.0;
    for(int i=1;i<=n;i++)
    {
        sum+=((long double)1/(long double)i);
    }
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
