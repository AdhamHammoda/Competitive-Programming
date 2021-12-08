#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll N,n;
ll arr[24];
map<ll,set<ll>> m;
ll sum=0;
set<ll> s;
void solve(ll idx)
{
    if(idx==n || s.size()==20)
    {
        m[-sum]=s;
        return;
    }
    if(sum+arr[idx]<=N)
    {
        sum+=arr[idx];
        s.insert(arr[idx]);
        solve(idx+1);
        s.erase(arr[idx]);
        sum-=arr[idx];
    }
    solve(idx+1);
}
void test_case()
{

    m.clear(),s.clear();
    for(int i=0;i<n;i++)cin>>arr[i];
    set<ll> s;
    solve(0);
    ll sum= m.begin()->first;
    for(auto x:m[sum])cout<<x<<" ";
    cout<<"sum:"<<-sum<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(cin>>N>>n)
    {
        test_case();
    }
}
