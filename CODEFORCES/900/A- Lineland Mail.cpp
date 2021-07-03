#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 2:39 AM
/// CORNER CASSSSSSSES
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sorted[n];
    ll mn=1e18;
    ll mx=-1e18;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sorted[i]=arr[i];
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    sort(sorted,sorted+n);
    for(int i=0;i<n;i++)
    {
        mp[sorted[i]+1e9]=i;
    }
    for(int i=0;i<n;i++)
    {
        ll x=arr[i];
        if(x==mn)
        {
            cout<<sorted[1]-sorted[0]<<" "<<mx-mn<<endl;
        }
        else if(x==mx)
        {
            cout<<sorted[n-1]-sorted[n-2]<<" "<<mx-mn<<endl;
        }
        else
        {
            cout<<min(x-sorted[mp[x+1e9]-1],sorted[mp[x+1e9]+1]-x)<<" "<<max(mx-arr[i],arr[i]-mn)<<endl;
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
