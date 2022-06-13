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
    ll arr[n];
    ll fst=-1;
    ll lst=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(fst==-1 && arr[i])fst=i;
        if(arr[i])lst=i;
    }
    if(fst==-1 && lst==-1)
    {
        cout<<0;
        return;
    }
    ll sum=lst-fst+1;
    for(int i=fst;i<=lst;i++)
    {
        if(arr[i]==arr[i-1] && arr[i]==0)
        {
            ll c=0;
            while(arr[i]==arr[i-1] && arr[i-1]==0)
            {
                c++;
                i++;
            }
            if(c>=1)
            {
                sum-=c+1;
            }
        }
    }
    cout<<sum;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
