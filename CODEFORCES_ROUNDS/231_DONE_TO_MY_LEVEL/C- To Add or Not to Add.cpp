#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=1e5+5;
ll n,k;
ll arr[N],sum[N];
bool ok(ll mid,ll idx)
{
    return ( (idx-mid+1)*arr[idx] ) -( sum[idx]-sum[mid-1]) <=k;
}
void test_case()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>arr[i];
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++)sum[i]=arr[i],sum[i]+=sum[i-1];
    ll ans=0,ind=0;
    for(int i=1;i<=n;i++)
    {
        ll low=1,high=i;
        ll tmp=0;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            if(ok(mid,i))tmp=max(tmp,i-mid+1),high=mid-1;
            else low=mid+1;
        }
        if(ans<tmp)ans=tmp,ind=arr[i];
    }
    cout<<ans<<" "<<ind;
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