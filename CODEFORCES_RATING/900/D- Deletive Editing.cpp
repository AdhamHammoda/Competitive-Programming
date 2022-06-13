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
    string s;
    cin>>s;
    string a;
    cin>>a;
    ll ssz=s.size();
    ll asz=a.size();
    map<char,vector<ll>>pos;
    for(int i=0;i<ssz;i++)pos[s[i]].push_back(i);
    ll ptr1=asz-1;
    ll mx=ssz+1;
    while(ptr1>=0)
    {
        if(!pos[a[ptr1]].size())
        {
            cout<<"NO"<<endl;
            return;
        }
        if(pos[a[ptr1]].back()>mx)
        {
            cout<<"NO"<<endl;
            return;
        }
        mx=pos[a[ptr1]].back();
        pos[a[ptr1]].pop_back();
        ptr1--;
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