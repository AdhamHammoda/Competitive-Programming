#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 10:10 pm
void test_case()
{
    ll n;
    cin>>n;
    pair<ll,ll> arr[n];
    ll left0=0;
    ll right0=0;
    ll left1=0;
    ll right1=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[i]={a,b};
        a?left1++:left0++;
        b?right1++:right0++;
    }
    ll mxl=0;
    ll mxr=0;
    left0>=left1?mxl=0:mxl=1;
    right0>=right1?mxr=0:mxr=1;
    ll c=0;
    for(int i=0;i<n;i++)
    {
        c+=abs(arr[i].first-mxl)+abs(arr[i].second-mxr);
    }
    cout<<c;
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
