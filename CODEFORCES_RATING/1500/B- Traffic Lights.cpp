#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;
    long double ans=(long double)l/(long double)v;
    ll tmp=d%((g+r)*v);
    if(tmp>=g*v)ans+=(long double)((g+r)*v-tmp)/(long double)v;
    cout<<fixed<<setprecision(10)<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}