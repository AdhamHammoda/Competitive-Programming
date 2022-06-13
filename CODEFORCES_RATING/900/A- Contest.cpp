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
double func(double p,double t)
{
    return max({3.0*p/10.0 , p - t*p/250.0});
}
void test_case()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    ll misha=func(a,c);
    ll vasya=func(b,d);
    if(misha>vasya)
    {
        cout<<"Misha";
    }
    else if(misha<vasya)
    {
        cout<<"Vasya";
    }
    else cout<<"Tie";
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
