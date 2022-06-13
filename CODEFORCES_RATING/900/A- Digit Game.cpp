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
    string s=" ";
    string a;
    cin>>a;
    s+=a;
    ll ro=0,re=0,bo=0,be=0;
    for(int i=1;i<=n;i++)
    {
        ll x=s[i]-'0';
        if(i%2)ro+=x%2,re+=(x%2==0);
        else bo+=x%2,be+=(x%2==0);
    }
    if(n%2)
    {
        if(ro)cout<<1<<endl;
        else cout<<2<<endl;
    }
    else
    {
        if(be)cout<<2<<endl;
        else cout<<1<<endl;
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