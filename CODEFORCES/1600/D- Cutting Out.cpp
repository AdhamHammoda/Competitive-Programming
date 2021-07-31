#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll N=200007;
ll n,k;
ll arr[N];
ll freq[N];
bool ok(ll m)
{
    ll y=0;
    for(int i=0;i<N;i++)
    {
       y+=freq[i]/m;
    }
    return y>=k;
}
void test_case()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    ll l=0,r=n-1;
    while(l<r)
    {
        ll mid=l+r+1;
        mid/=2;
        if(ok(mid))
        {
            l=mid;
        }
        else r=mid-1;
    }
    if(!r)
    {
        cout<<arr[0];
        return ;
    }
    vector<ll> v;
    for(int i=0;i<N;i++)
    {
        for(int j=1;j<=freq[i]/r;j++)
        {
            if(v.size()<k)
            {
                v.push_back(i);
            }
        }
    }
    for(auto x:v)cout<<x<<" ";
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}