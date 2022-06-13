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
    char a,b;
    cin>>a>>b;
    ll n;
    cin>>n;
    string cw="^>v<";
    string ccw=cw;
    reverse(ccw.begin(),ccw.end());
    int can1=false,can2=false;
    for(int i=0;i<4;i++)
    {
        if(cw[i]==a)
        {
            ll j=i;
            j+=n;
            j%=4;
            if(cw[j]==b)can1=true;
        }
        if(ccw[i]==a)
        {
            ll j=i;
            j+=n;
            j%=4;
            if(ccw[j]==b)can2=true;
        }
    }
    if(!(can1 ^ can2))cout<<"undefined";
    else if(can1)cout<<"cw";
    else if(can2)cout<<"ccw";
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