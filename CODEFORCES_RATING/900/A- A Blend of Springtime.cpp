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
    ll n=s.size();
    ll arr[n][3];
    for(int i=0;i<n;i++)arr[i][0]=arr[i][1]=arr[i][2]=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')continue;
        arr[i][s[i]-'A']++;
        if(i-1>=0)arr[i-1][s[i]-'A']++;
        if(i+1<n)arr[i+1][s[i]-'A']++;
    }
    for(int i=0;i<n;i++)
    {
        ll x=0;
        x=(arr[i][0]>0)+(arr[i][1]>0)+(arr[i][2]>0);
        if(x==3)cout<<"Yes",exit(0);
    }
    cout<<"No";
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