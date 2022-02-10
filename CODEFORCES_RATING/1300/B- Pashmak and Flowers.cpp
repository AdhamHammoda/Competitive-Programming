#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>m;
    for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]]++;
    sort(arr,arr+n);
    if(arr[n-1]!=arr[0])cout<<arr[n-1]-arr[0]<<" "<<m[arr[0]]*m[arr[n-1]];
    else cout<<0<<" "<<m[arr[0]]*(m[arr[0]]-1)/2;
}
int main()
{
//    FIO;
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}