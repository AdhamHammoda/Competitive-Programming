#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll mnx=-1e5,mxx=1e5,mny=-1e5,mxy=1e5;
    for(int i=0;i<n;i++)
    {
        ll a,b,f1,f2,f3,f4;
        cin>>a>>b>>f1>>f2>>f3>>f4;
        if(!f1)mnx=max(a,mnx);
        if(!f2)mxy=min(b,mxy);
        if(!f3)mxx=min(a,mxx);
        if(!f4)mny=max(b,mny);
    }
    if(mnx<=mxx && mny<=mxy)cout<<1<<" "<<mnx<<" "<<mny<<endl;
    else cout<<0<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
