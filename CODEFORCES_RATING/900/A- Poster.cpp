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
    string s=" ";
    string r;
    cin>>r;
    s+=r;
    if(n-k<k)while(k<n)cout<<"RIGHT" <<endl,k++;
    else while(k>1)cout<<"LEFT"<<endl,k--;
    if(k==n)
    {
        for(;k>1;k--)cout<<"PRINT "<<s[k]<<endl<<"LEFT"<<endl;
        cout<<"PRINT "<<s[1];
    }
    else
    {
        for(;k<n;k++)cout<<"PRINT "<<s[k]<<endl<<"RIGHT"<<endl;
        cout<<"PRINT "<<s[n];
    }
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