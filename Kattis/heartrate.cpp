#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a;
    cin>>a;
    long double b;
    cin>>b;
    cout<<fixed<<setprecision(10)<<60.0*(a-1)/b<<" "<<60.0*a/b<<" "<<60.0*(a+1)/b<<endl;;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
