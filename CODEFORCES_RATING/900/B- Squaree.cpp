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
    ll a1,b1,a2,b2;
    cin>>a1>>b1;
    cin>>a2>>b2;
    ll all=a1*b1+a2*b2;
    ll sq=sqrt(all);
    if(sq*sq!=all)cout<<"No"<<endl;
    else
    {
        if(a1+a2==b1 && b1==b2)cout<<"Yes"<<endl;
        else if(b1+b2==a1 && a1==a2)cout<<"Yes"<<endl;
        else if(a1+b2==b1 && b1==a2)cout<<"Yes"<<endl;
        else if(b1+a2==a1 && a1==b2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
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
