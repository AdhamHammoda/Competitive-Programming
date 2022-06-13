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
   string s,t;
   cin>>s>>t;
   ll h1,h2,m1,m2;
   h1=stoll(s.substr(0,2));
   h2=stoll(t.substr(0,2));
   m1=stoll(s.substr(3,2));
   m2=stoll(t.substr(3,2));
   ll ansh,ansm;
   bool mins=false;
   if(m2<=m1)
   {
       ansm=m1-m2;
   }
   else
   {
       mins=true;
       ansm=60-(m2-m1);
   }
   if(h2<=h1)
   {
       ansh=h1-h2;
   }
   else ansh=24-(h2-h1);
   if(mins)
   {
       if(ansh-1==-1)
       {
           ansh=23;
       }
       else ansh--;
   }
   if(ansh<10)cout<<0;
   cout<<ansh<<":";
   if(ansm<10)cout<<0;
   cout<<ansm;
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
