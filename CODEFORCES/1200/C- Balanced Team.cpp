#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<5)continue;
        ll pos=lower_bound(arr,arr+n,arr[i]-5)-arr;
        ans=max(ans,i-pos+1);
    }
    cout<<ans;
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