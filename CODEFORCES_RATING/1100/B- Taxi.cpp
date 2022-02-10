#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n,x;
    cin>>n;
    map<ll,ll> m;
    for(int i=0;i<n;i++)cin>>x,m[x]++;
    ll ans=0,mn=0;
    if(m[3] && m[1])mn=min(m[1],m[3]),ans+=mn,m[1]-=mn,m[3]-=mn;
    ans+=m[2]/2,m[2]%=2;
    if(m[2] && m[1])ans++,m[2]--,m[1]-=min(2LL,m[1]);
    ans+=m[4]+m[1]/4+(m[1]%4>0)+m[3]+m[2];
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