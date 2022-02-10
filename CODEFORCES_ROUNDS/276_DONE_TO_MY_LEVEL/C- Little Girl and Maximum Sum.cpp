#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
const ll N=2e5+5;
ll arr[N],done[N],freq[N];
void test_case()
{
    ll n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>arr[i];
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        freq[a]++,freq[b+1]--;
    }
    for(int i=1;i<=n;i++)freq[i]+=freq[i-1];
    priority_queue<pair<ll,ll>>pq;
    for(int i=1;i<=n;i++)pq.push({freq[i],i});
    sort(arr+1,arr+n+1);
    ll ptr=n;
    while(!pq.empty())
    {
        ll x=pq.top().second;
        done[x]=arr[ptr];
        ptr--;
        pq.pop();
    }
    ll sum=0;
    for(int i=1;i<=n;i++)sum+=done[i]*freq[i];
    cout<<sum;
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