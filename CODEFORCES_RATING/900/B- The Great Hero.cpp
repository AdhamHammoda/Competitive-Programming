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
    ll A,B,n;
    cin>>A>>B>>n;
    ll a[n];
    ll b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    vector<vector<ll>> v(n);
    for(int i=0;i<n;i++)v[i]={a[i],b[i]};
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        ll bb=v[i][1];
        ll aa=v[i][0];
        ll tmp=(bb/A) + (bb%A>0);
        if(tmp*aa>=B && i<n-1)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(tmp*aa>=B && i==n-1)
        {
            tmp--;
            if(B>tmp*aa)
            {
                cout<<"YES"<<endl;
                return;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        B-=tmp*aa;
    }
    cout<<"YES"<<endl;
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