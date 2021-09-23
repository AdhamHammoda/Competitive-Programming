#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll sum[200005];
ll mod=998244353;
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return ((ans%mod * ans%mod)%mod * a%mod)%mod;
    else return (ans%mod * ans%mod)%mod;
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    sum[0]=(b[0]=='1');
    for(int i=1;i<m;i++)
    {
        sum[i]+=sum[i-1]+(b[i]=='1');
    }
    ll j=max(0LL,m-n),ans=0;
    for(int i=max(0LL,n-m);i<n;i++)
    {
        if(a[i]=='1')
        {
            ans=(ans%mod + (sum[j]%mod * binpow(2,n-i-1)%mod)%mod)%mod;
        }
        j++;
    }
    cout<<ans;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
