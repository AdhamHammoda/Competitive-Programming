#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 2:46 am
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mn=1e9;
    ll mx=0;
    ll mnindx=0;
    ll mxindx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<mn)
        {
            mn=arr[i];
            mnindx=i;
        }
        if(arr[i]>mx)
        {
            mx=arr[i];
            mxindx=i;
        }
    }
    ll ans=max({abs(n-mnindx-1),abs(n-mxindx-1),mnindx,mxindx});
    cout<<ans;
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
