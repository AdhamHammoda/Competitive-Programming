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
    string r="";
    for(int i=0;i<200;i++)
    {
        if(i%2==0)r+="o";
        else r+="g";
    }
    cin>>s;
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='o')
        {
            ll x=i;
            ll j=0;
            for(;x<n;x++)
            {
                if(s[x]!=r[j])break;
                j++;
            }
            if(x-1<=i+1)
            {
                ans+=s[i];
                continue;
            }
            if(s[x-1]=='g')x--;
            ans+=("***");
            i=x-1;
        }
        else ans+=s[i];
    }
    cout<<ans;
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