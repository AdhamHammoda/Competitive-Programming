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
    ll ans=1e18;
    ll sz=s.size();
    if(s.find('0')!=string::npos && count(s.begin(),s.end(),'0')>1)
    {
        ll pos1=-1,pos2=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0' && pos2==-1)pos2=i;
            else if(s[i]=='0' && pos2!=-1)
            {
                pos1=i;
                break;
            }
        }
        ans=min(ans,(ll) sz- pos2 -1 + (pos2-pos1-1));
    }
    if(s.find('0')!=string::npos && s.find('5')!=string::npos)
    {
        ll pos1=-1,pos2=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0' && pos2==-1)pos2=i;
            else if(s[i]=='5' && pos2!=-1)
            {
                pos1=i;
                break;
            }
        }
        ans=min(ans,(ll) sz- pos2 -1 + (pos2-pos1-1));
    }
    if(s.find('2')!=string::npos && s.find('5')!=string::npos)
    {
        ll pos1=-1,pos2=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='5' && pos2==-1)pos2=i;
            else if(s[i]=='2' && pos2!=-1)
            {
                pos1=i;
                break;
            }
        }
        ans=min(ans,(ll) sz- pos2 -1 + (pos2-pos1-1));
    }
    if(s.find('7')!=string::npos && s.find('5')!=string::npos)
    {
        ll pos1=-1,pos2=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='5' && pos2==-1)pos2=i;
            else if(s[i]=='7' && pos2!=-1)
            {
                pos1=i;
                break;
            }
        }
        ans=min(ans,(ll) sz- pos2 -1 + (pos2-pos1-1));
    }
    cout<<ans<<endl;
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
