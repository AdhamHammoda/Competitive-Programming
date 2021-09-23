#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    long double allx,ally,r,a1,b1,a2,b2;
    cin>>allx>>ally>>r>>a1>>b1>>a2>>b2;
    long double diff=fmax(b2,b1)-fmin(b2,b1);
    long double ans=0.0;
    ans+=r*(diff/(ally));
    long double ans2=0.0,ans3=0.0;
    ans2+=2.0*r*(fmin(b2,b1)/(ally));
    long double diff2=fmax(a1,a2)-fmin(a1,a2);
    r*=(fmin(b2,b1)/(ally));
    ans3+=acos(-1.0)*r*(diff2/allx);
    ans+=fmin(ans2,ans3);
    cout<<fixed<<setprecision(10)<<ans;
}
int main()
{
    FIO
    int t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
