#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll ans1=a*(a+1)/2;
    ll ans2=b*(b-1)/2;
    ll ans3=((ans1%mod * b%mod)%mod + a%mod)%mod;
    cout<<(ans2%mod * ans3%mod)%mod;
}
int main()
{
//    FIO
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
