#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
long double a,b,c,d,p;
void test_case()
{
    long double ans=pow(pow(fabs(a-c),p)+pow(fabs(b-d),p),1.0/p);
    cout<<fixed<<setprecision(10)<<ans<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>a)
    {
        if(a==0)return 0;
        cin>>b>>c>>d>>p;
        test_case();
    }
}
