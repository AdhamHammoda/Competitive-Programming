#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,m,k;
ll arr[200005],dp[2005],cumsum[2005],offer[2005];
ll solve(ll cur)
{
    if(cur>=k)return 0;
    ll &ans=dp[cur];
    if(ans!=-1)return ans;
    ans=1e18;
    for(int i=1;i<=k-cur;i++)
    {
        ll ind=cur+offer[i];
        ans=min(ans,solve(cur+i)+cumsum[cur+i-1]-cumsum[ind-1]);
    }
    return ans;
}
void test_case()
{
    cin>>n>>m>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<k;i++)
    {
        if(i)cumsum[i]=cumsum[i-1]+arr[i];
        else cumsum[i]=arr[i];
    }
    for(int i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x<=k)offer[x]=max(offer[x],y);
    }
    for(int i=0;i<=2005;i++)dp[i]=-1;
    cout<<solve(0);
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
