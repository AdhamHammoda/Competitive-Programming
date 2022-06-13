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
    string a,b;
    cin>>a>>b;
    if(a.size()<b.size())
    {
        reverse(a.begin(),a.end());
        while(a.size()<b.size())a.push_back('0');
        reverse(a.begin(),a.end());
    }
    if(b.size()<a.size())
    {
        reverse(b.begin(),b.end());
        while(b.size()<a.size())b.push_back('0');
        reverse(b.begin(),b.end());
    }
    for(int i=0;i<b.size();i++)
    {
        if(a[i]<b[i])cout<<"<",exit(0);
        if(a[i]>b[i])cout<<">",exit(0);
    }
    cout<<"=";
}
int main()
{
    FIO
//  freopen("shop.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
 