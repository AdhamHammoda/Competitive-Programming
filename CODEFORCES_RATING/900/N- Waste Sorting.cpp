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
    ll c1,c2,c3;
    ll a1,a2,a3,a4,a5;
    cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
    if(a1>c1 || a2>c2 || a3>c3)
    {
        cout<<"NO"<<endl;
        return;
    }
    c1-=a1;
    c2-=a2;
    c3-=a3;
    ll mn=min(a4,c1);
    a4-=mn;
    c1-=mn;
    mn=min(a5,c2);
    a5-=mn;
    c2=-mn;
    ll tot=a4+a5;
    mn=min(c3,tot);
    tot-=mn;
    c3-=mn;
    if(tot)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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