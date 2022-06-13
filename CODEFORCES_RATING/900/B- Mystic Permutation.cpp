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
    set<ll> s;
    for(int i=1;i<=n;i++)s.insert(i);
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(*s.begin()<a[i])a[i]=*s.begin(),s.erase(*s.begin());
        else
        {
            auto x=s.upper_bound(a[i]);
            if(x==s.end())swap(a[i],a[i-1]);
            else a[i]=*x,s.erase(*x);
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
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