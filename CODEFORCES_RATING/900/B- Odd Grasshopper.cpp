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
    ll x0,n;
    cin>>x0>>n;
    if(x0%2==0)
    {
        if(n%4==1)x0+=-n;
        if(n%4==2)x0+=-(n-1)+(n);
        if(n%4==3)x0+=-(n-2)+(n-1)+n;
    }
    else
    {
        if(n%4==1)x0+=n;
        if(n%4==2)x0+=(n-1)-(n);
        if(n%4==3)x0+=(n-2)-(n-1)-n;
    }
    cout<<x0<<endl;
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