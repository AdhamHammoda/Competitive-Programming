#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll ans=1e18;
    for(ll i=0;i<5;i++)
    {
        for(ll j=0;j<5;j++)
        {
            ll x;
            cin>>x;
            if(x==1)ans=min(ans,abs(i-2)+abs(j-2));
        }
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