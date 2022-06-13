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
void test_case()
{
    ll n,d;
    cin>>n>>d;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        ll x=a[i]-d;
        ll mn=1e18;
        for(int j=0;j<n;j++)mn=min(mn,abs(a[j]-x));
        if(mn==d)s.insert(x);
        x=a[i]+d;
        mn=1e18;
        for(int j=0;j<n;j++)mn=min(mn,abs(a[j]-x));
        if(mn==d)s.insert(x);
    }
    cout<<s.size();

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