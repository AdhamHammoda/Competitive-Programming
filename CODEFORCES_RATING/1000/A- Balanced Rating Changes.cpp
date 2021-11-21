#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-4-2021 , 3:52 am
/// NEVER USE A BUILT IN C++ FUNCTION IN OUTPUT
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]&1)odd++;
    }
    ll tmpodd=odd;
    for(int i=0;i<n;i++)
    {
        long double x=arr[i];
        if(arr[i]%2==0)
        {
            arr[i]/=2;
            cout<<arr[i]<<endl;
        }
        else
        {
            if(tmpodd<=odd/2)
            {
                ll ans=floor(x/2.0);
                cout<<ans<<endl;
            }
            else
            {
                tmpodd--;
                ll ans=ceil(x/2.0);
                cout<<ans<<endl;
            }
        }
    }
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
