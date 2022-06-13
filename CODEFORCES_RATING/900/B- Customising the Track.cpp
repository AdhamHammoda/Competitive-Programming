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
const ll N=2e5+5;
ll a[N];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    ll sum=0;
    for(int i=1;i<=n;i++)sum+=a[i];
    ll tot=sum/n;
    for(int i=1;i<=n;i++)a[i]=tot;
    ll x=sum%n;
    for(int i=1;x--;i++)a[i]++;
    sum=0;
    for(int i=1;i<=n;i++)sum+=a[i];
    ll ans=0;
    for(int i=1;i<=n;i++)sum-=a[i],ans+=(a[i]*(n-i))-sum;
    cout<<ans<<endl;
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