#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    long double vp,vd,t,f,c;
    cin>>vp>>vd>>t>>f>>c;
    if(vp>vd)cout<<0,exit(0);
    ll ans=0;
    long double distp=vp*t;
    while(distp<c)
    {
        long double td=distp/(vd-vp);
        distp+=td*vp;
        if(distp>=c)break;
        double tb=f+distp/vd;
        distp+=tb*vp;
        ans++;
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}