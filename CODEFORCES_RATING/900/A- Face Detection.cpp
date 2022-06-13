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
    ll n,m;
    cin>>n>>m;
    char grid[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>grid[i][j];
    ll c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+1<n && j+1<m)
            {
                string a="face";
                sort(a.begin(),a.end());
                string r="";
                r.push_back(grid[i][j]);
                r.push_back(grid[i+1][j]);
                r.push_back(grid[i][j+1]);
                r.push_back(grid[i+1][j+1]);
                sort(r.begin(),r.end());
                if(r==a)c++;
            }
        }
    }
    cout<<c;
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