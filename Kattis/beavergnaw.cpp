#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll d,v;
void test_case()
{
    long double ans=cbrt(d*d*d - 6*(long double)v/acos(-1));
    cout<<fixed<<setprecision(10)<<ans<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(cin>>d>>v)
    {
        if(!d && !v)break;
        test_case();
    }
}
