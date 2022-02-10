#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll a[n],b[n],c[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)c[i]=b[i]-a[i];
    sort(c,c+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll it=lower_bound(c,c+n,a[i]-b[i])-c;
        it-=(a[i]-b[i]>0);
        ans+=it;
    }
    cout<<ans/2;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
