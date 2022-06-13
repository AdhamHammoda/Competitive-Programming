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
bool cmp(pair<ll,ll> p1,pair<ll,ll>p2)
{
    return p1.second<p2.second;
}
void test_case()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    ll a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)v[i]={a[i],b[i]};
    sort(v.begin(),v.end(),cmp);
    ll sum=0;
    for(int i=0;i<n-2;i++)sum+=v[i].first;
    if(sum+v[n-2].first+v[n-1].first>v[n-2].second+v[n-1].second)cout<<"NO";
    else cout<<"YES";
}
int main()
{
    FIO
//  freopen("shop.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}