#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    long double a,b,c,d;
    cin>>a>>b>>c>>d;
    long double s=(a+b+c+d)/2.0;
    cout<<fixed<<setprecision(10)<<sqrt((s-a)*(s-b)*(s-c)*(s-d));
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
