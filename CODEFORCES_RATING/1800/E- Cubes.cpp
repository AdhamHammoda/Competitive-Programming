#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll n,m,k;
vector<ll> col[N];
ll ok(ll c,ll l,ll r)
{
    return upper_bound(col[c].begin(),col[c].end(),r)-lower_bound(col[c].begin(),col[c].end(),l);
}
void test_case()
{
    cin>>n>>m>>k;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i],col[arr[i]].push_back(i);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll low=i,high=n-1;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            ll tmp=ok(arr[i],i,mid);
            if(tmp+k>=(mid-i+1))ans=max(ans,tmp),low=mid+1;
            else high=mid-1;
        }
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}