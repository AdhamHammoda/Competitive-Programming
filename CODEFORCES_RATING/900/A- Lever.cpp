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
    bool tam=0;
    string s;
    cin>>s;
    ll sum1=0,sum2=0;
    ll dd=s.find('^');
    for(int i=0;i<s.size();i++)
    {
        char x=s[i];
        if(x=='=')continue;
        else if(x=='^')tam=true;
        else
        {
            ll diff=x-'0';
            if(tam)sum2+=diff*(i-dd);
            else sum1+=diff*(dd-i);
        }
    }
    if(sum1==sum2)cout<<"balance";
    else if(sum1>sum2)cout<<"left";
    else cout<<"right";
}
int main()
{
    FIO
//  freopen("input.txt","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}