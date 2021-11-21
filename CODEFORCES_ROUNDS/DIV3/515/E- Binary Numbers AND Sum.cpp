#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll mod=998244353,N=2e5+5;
ll cumsum[N];
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
    string a,b;
    cin>>n>>m>>a>>b;
    cumsum[0]=(b[0]=='1');
    for(int i=1;i<m;i++)cumsum[i]+=cumsum[i-1]+(b[i]=='1');
    ll ans=0,j=max(0LL,m-n);
    for(int i=max(0LL,n-m);i<n;i++)
    {
        if(a[i]=='1')ans=(ans + (cumsum[j])*binpow(2LL,n-i-1))%mod;
        j++;
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
