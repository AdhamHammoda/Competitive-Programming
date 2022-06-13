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
    priority_queue<ll>odd;
    priority_queue<ll>even;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        arr[i]%2?odd.push(arr[i]):even.push(arr[i]);
    }
    if(odd.size()>=even.size())
    {
        ll i=0;
        while(!odd.empty() || !even.empty())
        {
            if(i%2 && even.size())
            {
                sum-=even.top();
                even.pop();
            }
            else if(i%2==0 && odd.size())
            {
                sum-=odd.top();
                odd.pop();
            }
            else break;
            i++;
        }
    }
    else
    {
        ll i=0;
        while(!odd.empty() || !even.empty())
        {
            if(i%2 && odd.size())
            {
                sum-=odd.top();
                odd.pop();
            }
            else if(i%2==0 && even.size())
            {
                sum-=even.top();
                even.pop();
            }
            else break;
            i++;
        }
    }
    cout<<sum;
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
