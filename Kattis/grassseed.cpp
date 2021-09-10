#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    long double x;
    cin>>x;
    ll n;
    cin>>n;
    long double sum=0.0;
    for(int i=0;i<n;i++)
    {
        long double a,b;
        cin>>a>>b;
        sum+=x*a*b;
    }
    cout<<fixed<<setprecision(10)<<sum<<endl;
}
int main()
{
    FIO
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
