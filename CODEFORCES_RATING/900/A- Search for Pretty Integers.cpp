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
    ll n,m;
    cin>>n>>m;
    ll a=1e18,b=1e18;
    ll x;
    map<ll,ll>m1,m2;
    for(int i=1;i<=n;i++)cin>>x,a=min(a,x),m1[x]++;
    for(int i=1;i<=m;i++)cin>>x,b=min(b,x),m2[x]++;
    for(int i=1;i<=9;i++)if(m1[i] && m2[i])cout<<i,exit(0);
    if(a==b)cout<<a;
    else
    {
        if(a>b)swap(a,b);
        cout<<a*10+b;
    }
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