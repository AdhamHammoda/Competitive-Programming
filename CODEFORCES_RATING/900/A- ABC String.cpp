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
    multiset<string>ms;
    string s;
    cin>>s;
    char ss[2]={'(',')'};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                string r=s;
                for(auto &x:r)
                {
                    if(x=='A')x=ss[i];
                    else if(x=='B')x=ss[j];
                    else if(x=='C')x=ss[k];
                }
                ms.insert(r);
            }
        }
    }
    for(auto r:ms)
    {
        ll bal=0;
        bool can=true;
        ll sz=r.size();
        for(auto x:r)
        {
            if(bal<0 || bal>sz/2)can=false;
            bal+=(x=='(');
            bal-=(x==')');
        }
        if(can && bal==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    FIO
//  freopen("shop.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}