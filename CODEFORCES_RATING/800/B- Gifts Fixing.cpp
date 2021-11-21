#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    ll mna=1e18,mnb=1e18;
    for(int i=0;i<n;i++)cin>>a[i],mna=min(mna,a[i]);
    for(int i=0;i<n;i++)cin>>b[i],mnb=min(mnb,b[i]);
    ll c=0;
    for(int i=0;i<n;i++)
    {
        ll diff=max(0LL,min(b[i]-mnb,a[i]-mna));
        c+=diff;
        b[i]-=diff;
        a[i]-=diff;
        c+=b[i]-mnb,c+=a[i]-mna;
    }
    cout<<c<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
