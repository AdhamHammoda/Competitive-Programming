#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,d;
    cin>>n>>d;
    pair<ll,ll> arr[n];
    for(int i=0;i<n;i++)cin>>arr[i].first>>arr[i].second;
    sort(arr,arr+n);
    vector<ll> sum(n+1,0),money(n,0);
    for(int i=1;i<=n;i++)sum[i]=sum[i-1]+arr[i-1].second,money[i-1]=arr[i-1].first;
    ll mx=0;
    for(int i=1;i<=n;i++)
    {
        ll x=upper_bound(money.begin()+(i-1),money.begin()+n,money[i-1]+d-1)-(money.begin());
        mx=max(mx,sum[x]-sum[i-1]);
    }
    cout<<mx;
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