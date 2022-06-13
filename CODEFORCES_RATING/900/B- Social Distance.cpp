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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(n>m)cout<<"NO"<<endl;
    else
    {
        sort(v.begin(),v.end());
        ll x=0;
        for(int i=0;i<n-1;i++)
        {
            if(x+max(v[i],v[i+1])>m-1)
            {
                cout<<"NO"<<endl;
                return;
            }
            x+=max(v[i],v[i+1])+1;
        }
        if(m-1-x<v[n-1])
        {
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
    }
}
int main()
{
    FIO
//  freopen("input.txt","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}