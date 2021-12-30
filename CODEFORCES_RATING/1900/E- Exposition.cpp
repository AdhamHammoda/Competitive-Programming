#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
const ll N=1e5+7;
ll arr[N];
ll n,k;
vector<pair<ll,ll>> all;
multiset<ll> ms;
bool ok(ll idx)
{
    ms.clear();
    all.clear();
    for(int i=1;i<=idx-1;i++)ms.insert(arr[i]);
    for(int i=idx;i<=n;i++)
    {
        ms.insert(arr[i]);
        ll mn=*ms.begin();
        ll mx=*ms.rbegin();
        if(mx-mn<=k)all.push_back({i-idx+1,i});
        ms.erase(ms.find(arr[i-idx+1]));
    }
    return all.size() > 0;
}
void test_case()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>arr[i];
    ll low=1,high=n,ans=1;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(ok(mid))ans=mid,low=mid+1;
        else high=mid-1;
    }
    ok(ans);
    cout<<ans<<" "<<all.size()<<endl;
    for(auto x:all)cout<<x.first<<" "<<x.second<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}