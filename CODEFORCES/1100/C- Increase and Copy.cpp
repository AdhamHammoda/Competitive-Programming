#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll ans=1e18;
    for(ll i=1;i*i<=n;i++)
    {
        ans=min(ans,(ll)(i-1)+(n-1)/i);
    }
    cout<<ans<<endl;
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
