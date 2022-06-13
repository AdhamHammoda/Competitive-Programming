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
    ll k;
    cin>>k;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    multiset<ll> ms;
    map<ll,ll>m;
    ll y;
    for(int i=0;i<k;i++)cin>>y,ms.insert(y);
    for(int i=0;i<n;i++)
    {
        if(!a[i])
        {
            auto x=*ms.rbegin();
            ms.erase(ms.find(x));
            a[i]=x;
            if(m[a[i]])cout<<"No",exit(0);
            m[a[i]]++;
        }
    }
    for(int i=1;i<n;i++)if(a[i]<=a[i-1])cout<<"Yes",exit(0);
    cout<<"No";
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