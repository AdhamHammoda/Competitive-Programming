#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    priority_queue<pair<ll,ll>> pq;
    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;pq.push({a,i});
    }
    set<ll> s;
    ll mn=0;
    while(k--)
    {
        mn=pq.top().first;
        s.insert(pq.top().second);
        pq.pop();
    }
    cout<<mn<<endl;
    for(auto x:s)cout<<x<<" ";
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
