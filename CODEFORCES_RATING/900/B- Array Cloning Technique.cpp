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
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>m;
    for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]]++;
    ll mx=0;
    for(int i=0;i<n;i++)mx=max(mx,m[arr[i]]);
    if(mx==n)
    {
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    while(mx*2<=n)
    {
        ans++;
        mx*=2;
        ans+=mx/2;
    }
    ll diff=(n-mx);
    ans+=diff;
    cout<<ans+ (diff>0)<<endl;
}
int main()
{
    FIO
//  freopen("input.txt","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
