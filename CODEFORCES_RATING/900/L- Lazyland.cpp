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
    vector<ll> v[k+1];
    ll a[n];
    set<ll>s;
    for(int i=0;i<n;i++)cin>>a[i],s.insert(a[i]);
    ll c=s.size();
    ll x;
    for(int j=0;j<n;j++)cin>>x,v[a[j]].push_back(x);
    ll sum=0;
    multiset<ll>ms;
    for(int i=1;i<=k;i++)
    {
        if(!v[i].size())continue;
        sort(v[i].begin(),v[i].end());
        for(int j=0;j<v[i].size()-1;j++)ms.insert(v[i][j]);
    }
    for(auto x:ms)
    {
        if(c==k)break;
        sum+=x;
        c++;
    }
    cout<<sum;
}
int main()
{
    FIO
//  freopen("input.txt","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}