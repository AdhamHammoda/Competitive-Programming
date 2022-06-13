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
    map<char,ll>m;
    m['Q']=m['q']=9;
    m['R']=m['r']=5;
    m['B']=m['b']=3;
    m['N']=m['n']=3;
    m['P']=m['p']=1;
    ll b=0,w=0;
    for(int i=0;i<8;i++)
    {
        string s;
        cin>>s;
        for(auto x:s)
        {
            if(x=='.')continue;
            if(x>='A' && x<='Z')w+=m[x];
            else b+=m[x];
        }
    }
    if(w==b)cout<<"Draw";
    else if(w>b)cout<<"White";
    else cout<<"Black";
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