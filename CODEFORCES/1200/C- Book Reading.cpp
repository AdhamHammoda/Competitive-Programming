#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll dig=m%10;
    vector<ll> sum(11);
    for(ll i=1;i<=10;i++)
    {
        if(i)sum[i]=sum[i-1]+(i*dig)%10;
        else sum[i]=(dig*i)%10;
    }
    ll ans=(n/m/10)*sum[10];
    ll mod=(n/m)%10;
    if(mod)ans+=sum[mod];
    cout<<ans<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}