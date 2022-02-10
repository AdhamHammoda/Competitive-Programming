#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll n,m,k;
ll arr[N];
bool ok(ll idx)
{
    ll bx=m,sz=k;
    for(int i=idx;i<n;i++)
    {
        if(arr[i]>sz)bx--,sz=k-arr[i];
        else sz-=arr[i];
        if(!bx)return 0;
    }
    return 1;
}
void test_case()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    ll low=0,high=n-1;
    ll ans=n;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(ok(mid))high=mid-1,ans=mid;
        else low=mid+1;
    }
    cout<<n-ans;
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
