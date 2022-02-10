#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
const ll N=1e5+5;
ll dp[N],arr[N];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    dp[0]=1;
    for(int i=1;i<n;i++)
    {
        ll tmp=0;
        for(int j=i-1;j>=max(0,i-100);j--)
        {
            if(dp[j]>tmp && __gcd(arr[j],arr[i])!=1)tmp=dp[j];
        }
        dp[i]=tmp+1;
    }
    ll ans=0;
    for(int i=0;i<n;i++)ans=max(ans,dp[i]);
    cout<<ans;
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