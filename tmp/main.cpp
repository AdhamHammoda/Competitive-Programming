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
ll a,b;
ll ok(ll mid)
{
    ll ans=max(0LL,mid-b);
    ll aa=a;
    while(aa)
    {
        ans++;
        aa/=mid;
    }
    return ans;
}
void test_case()
{
    cin>>a>>b;
    ll low=2,high=2e9;
    ll ans=4e18;
    while(low+10<=high)
    {
        ll m1=low+(high-low)/3;
        ll m2=high-(high-low)/3;
        ll f1=ok(m1);
        ll f2=ok(m2);
        ans=min({ans,f1,f2});
        if(f1>=f2)low=m1+1;
        else high=m2-1;
    }
    for(;low<=high;low++)ans=min(ans,ok(low));
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
