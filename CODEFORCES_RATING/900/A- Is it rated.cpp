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
   bool unrated=true;
   bool maybe=true;
   ll lsta=1e9,lstb=1e9;
   while(n--)
   {
       ll a,b;
       cin>>a>>b;

       if(a!=b)unrated=false;
       if(lsta<a && lstb<b)maybe=false;
       lsta=a;
       lstb=b;
   }
   if(!unrated)cout<<"rated"<<endl;
   else
   {
       if(maybe)cout<<"maybe"<<endl;
       else cout<<"unrated"<<endl;
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
