#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        a[i]*=(ll)((i+1)*(n-i));
    }
    sort(a,a+n),sort(b,b+n),reverse(b,b+n);
    ll mod=998244353;
    for(int i=0;i<n;i++)
    {
        ans=(ans%mod+(((a[i]%mod)*b[i])%mod))%mod;
    }
    cout<<ans;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
