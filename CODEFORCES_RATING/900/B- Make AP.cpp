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
    ll a,b,c;
    cin>>a>>b>>c;
    ll diff1=c-b;
    ll diff2=b-a;
    ll diff3=(c+a)/2;
    if((b-diff1)%a==0 && (b-diff1)>=a)cout<<"YES"<<endl;
    else if((b+diff2)%c==0 && (b+diff2)>=c)cout<<"YES"<<endl;
    else if((c+a)%2==0 && ((c+a)/2)%b==0 && ((c+a)/2)>=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    FIO
//  freopen("shop.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
 