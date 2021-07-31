#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-26-2021 , 11:09 pm
void test_case()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll arr[n];
    ll les=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        les+=arr[i]<=x;
    }
    ll ans=0;
    if(x<=y)
    {
        ans=ceil((double)les/2.0);
    }
    else ans=n;
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
