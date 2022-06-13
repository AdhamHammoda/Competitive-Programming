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
    map<string,string>m;
    ll n,k;
    cin>>n>>k;
    pair<string,string> a[n+k];
    for(int i=0;i<n+k;i++)
    {
        cin>>a[i].first>>a[i].second;
        if(a[i].second.back()!=';')m[a[i].second]=a [i].first;
    }
    for(int i=0;i<n+k;i++)
    {
        if(a[i].second.back()==';')
        {
            string r=a[i].second;
            r.pop_back();
            cout<<a[i].first<<" "<<a[i].second<<" #"<<m[r]<<endl;
        }
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