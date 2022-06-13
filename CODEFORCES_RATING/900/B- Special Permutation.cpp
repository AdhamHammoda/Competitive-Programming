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
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v(n,-1);
    set<ll> s;
    for(int i=1;i<=n;i++)s.insert(i);
    v[n-1]=b;
    v[0]=a;
    s.erase(a);
    s.erase(b);
    ll ind1=1;
    ll ind2=n-2;
    for(int i=n;i>b;i--)
    {
        if(s.find(i)==s.end())continue;
        if(ind1<n/2)
        {
            s.erase(i);
            v[ind1]=i;
            ind1++;
        }
    }
    for(int i=1;i<a;i++)
    {
        if(s.find(i)==s.end())continue;
        if(ind2>=n/2)
        {
            s.erase(i);
            v[ind2]=i;
            ind2--;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(s.find(i)==s.end())continue;
        if(ind2>=n/2)
        {
            v[ind2]=i;
            ind2--;
        }
        else if(ind1<n/2)
        {
            v[ind1]=i;
            ind1++;
        }
    }
    for(int i=0;i<n/2;i++)
    {
        if(v[i]<a)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=n/2;i<n;i++)
    {
        if(v[i]>b)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(auto x:v)cout<<x<<" ";
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