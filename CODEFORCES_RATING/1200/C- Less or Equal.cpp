#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    ll ans=(k?(arr[k-1]):(arr[0]-1));
    ll c=0;
    for(int i=0;i<n;i++)if(arr[i]<=ans)c++;
    if(c!=k || !(ans>=1 && ans<=1e9))ans=-1;
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
