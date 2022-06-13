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
    ll n,k;
    cin>>n>>k;
    set<ll>s;
    for(int i=1;i<=n*k;i++)
    {
        s.insert(i);
    }
    ll arr[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
        s.erase(arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!j)cout<<arr[i]<<" ";
            else
            {
                cout<<*s.begin()<<" ";
                s.erase(s.begin());
            }
        }
        cout<<endl;
    }
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
