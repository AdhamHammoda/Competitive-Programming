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
    string s;
    cin>>s;
    vector<pair<ll,char>> v;
    ll c=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])c++;
        else v.push_back({c,s[i-1]}),c=1;
    }
    v.push_back({c,s.back()});
    ll sz=v.size();
    if(sz%2==0)cout<<0,exit(0);
    for(int i=0;i<sz/2;i++)
    {
        if(v[i].second!=v[sz-i-1].second)cout<<0,exit(0);
        if(v[i].first+v[sz-i-1].first<3)cout<<0,exit(0);
    }
    if(v[sz/2].first>=2)cout<<v[sz/2].first+1;
    else cout<<0;
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