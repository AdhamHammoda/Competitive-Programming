#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    map<ll,ll>freq;
    ll cumsum[2*k+2]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++)
    {
        freq[arr[i]+arr[n-i-1]]++;
        ll a1=1+arr[i],b1=arr[i]+k;
        ll a2=1+arr[n-i-1],b2=arr[n-i-1]+k;
        if(max(a1,a2)>min(b1,b2))continue;
        cumsum[min(a1,a2)]++;
        cumsum[max(b1,b2)+1]--;
    }
    for(int i=1;i<=2*k;i++)cumsum[i]+=cumsum[i-1];
    ll ans=1e18;
    for(int sum=2;sum<=2*k;sum++)
    {
        ans=min(ans,cumsum[sum]-freq[sum]+2*(n/2 - cumsum[sum]));
    }
    cout<<ans<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
