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
    map<string,map<string,ll>>m;
    m["rock"]["scissors"]=1;
    m["scissors"]["paper"]=1;
    m["paper"]["rock"]=1;
    string a[4];
    for(int i=1;i<=3;i++)cin>>a[i];
    string s="zFMS";
    for(int i=1;i<=3;i++)
    {
        ll c=0;
        for(int j=1;j<=3;j++)
        {
            if(i==j)continue;
            c+=m[a[i]][a[j]];
        }
        if(c==2)cout<<s[i],exit(0);
    }
    cout<<"?";
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