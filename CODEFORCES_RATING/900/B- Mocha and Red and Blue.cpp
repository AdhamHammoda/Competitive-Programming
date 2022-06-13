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
    string s;
    cin>>s;
    ll ptr1=-1,ptr2=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='?')ptr1=i,ptr2=i;
    }
    if(ptr1==-1)
    {
        for(int i=0;i<n;i++)
        {
            i%2?s[i]='R':s[i]='B';
        }
        cout<<s<<endl;
        return;
    }
    ptr1++;
    ptr2--;
    while(ptr1<n || ptr2>-1)
    {
        if(ptr1<n)
        {
            if(s[ptr1-1]=='R' && s[ptr1]=='?')s[ptr1]='B';
            if(s[ptr1-1]=='B' && s[ptr1]=='?')s[ptr1]='R';
            ptr1++;
        }
        if(ptr2>-1)
        {
            if(s[ptr2+1]=='R' && s[ptr2]=='?')s[ptr2]='B';
            if(s[ptr2+1]=='B' && s[ptr2]=='?')s[ptr2]='R';
            ptr2--;
        }
    }
    cout<<s<<endl;
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
