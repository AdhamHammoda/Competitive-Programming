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
    string s;
    cin>>s;
    deque<char>dq;
    if(n%2)
    {
        for(int i=0;i<n;i++)
        {
            if(i%2)dq.push_front(s[i]);
            else dq.push_back(s[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(i%2)dq.push_back(s[i]);
            else dq.push_front(s[i]);
        }
    }
    for(auto x:dq)cout<<x;
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
