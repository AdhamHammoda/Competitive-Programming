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
    if(n%4)cout<<"===",exit(0);
    map<char,ll>m;
    for(auto x:s)
    {
        if(x!='?')m[x]++;
        if(m[x]>n/4)cout<<"===",exit(0);
    }
    for(auto &x:s)
    {
        if(x=='?')
        {
            if(m['A']<n/4)m['A']++,x='A';
            else if(m['G']<n/4)m['G']++,x='G';
            else if(m['C']<n/4)m['C']++,x='C';
            else if(m['T']<n/4)m['T']++,x='T';
        }
    }
    cout<<s;
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