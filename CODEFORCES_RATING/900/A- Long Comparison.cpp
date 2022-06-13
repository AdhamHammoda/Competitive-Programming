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
    ll x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    string s1=to_string(x1);
    string s2=to_string(x2);
    ll sz1=s1.size();
    ll sz2=s2.size();
    if(sz1+p1<sz2+p2)cout<<"<"<<endl;
    else if(sz1+p1>sz2+p2)cout<<">"<<endl;
    else
    {
        if(s1.size()<s2.size())s1+=string(s2.size()-s1.size(),'0');
        if(s2.size()<s1.size())s2+=string(s1.size()-s2.size(),'0');
        if(s1==s2)cout<<"="<<endl;
        else
        {
            for(int i=0;i<s1.size();i++)
            {
                if(s1[i]==s2[i])continue;
                if(s1[i]<s2[i])cout<<"<"<<endl;
                if(s1[i]>s2[i])cout<<">"<<endl;
                return;
            }
        }
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