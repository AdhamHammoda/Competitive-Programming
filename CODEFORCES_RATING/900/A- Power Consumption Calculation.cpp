///       ______        __________                    _____   _____        _____
///      ///  \\\      ||__||   \\\    |||     |||  ||     || |||\\\      ///|||
///     ///    \\\     ||__||    \\\   |||_____|||  ||     || ||| \\\    /// |||
///    ///______\\\    ||__||     \\\  |||_____|||  ||     || |||  \\\  ///  |||
///   ///________\\\   ||__||     ///  |||_____|||  ||     || |||   \\\///   |||
///  ///          \\\  ||__||    ///   |||     |||  ||     || |||            |||
/// ///            \\\ ||__||___///    |||     |||  ||_____|| |||            |||

#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
ll n,P1,P2,P3,T1,T2;
ll func(ll x)
{
    ll ans=0;
    for(int i=1;i<=T1 && i<=x;i++)ans+=P1;
    x=max(0LL,x-T1);
    for(int i=1;i<=T2 && i<=x;i++)ans+=P2;
    x=max(0LL,x-T2);
    for(int i=1;i<=x;i++)ans+=P3;
    return ans;
}
void test_case()
{
    cin>>n>>P1>>P2>>P3>>T1>>T2;
    ll ans=0;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
    for(int i=0;i<n;i++)
    {
        if(i)ans+=func((v[i].first-v[i-1].second));
        ans+=(v[i].second-v[i].first)*P1;
    }
    cout<<ans;
}
int main()
{
    FIO
//  freopen("input.txt","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}