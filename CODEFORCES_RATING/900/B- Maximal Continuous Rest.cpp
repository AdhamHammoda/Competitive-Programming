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
    ll arr[n];
    ll c=0,mx1=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)
        {
            if(arr[i]==arr[i-1] && arr[i]==1)
            {
                c++;
            }
            else
            {
                if(c)mx1=max(mx1,c+1);
                c=0;
            }
        }
    }
    ll mx2=0;
    for(int i=0;i<n;i++)
    {
        if(!arr[i])break;
        mx2++;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(!arr[i])break;
        mx2++;
    }
    cout<<max(mx1,mx2);
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
