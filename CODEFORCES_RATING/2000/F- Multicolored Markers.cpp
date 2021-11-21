#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll ans=4e18;
    set<ll> div1,div2;
    for(ll i=1;i*i<=max(a,b);i++)
    {
        if(a%i==0)div1.insert(i),div1.insert(a/i);
        if(b%i==0)div2.insert(i),div2.insert(b/i);
    }
    for(ll i=1;i*i<=(a+b);i++)
    {
        if((a+b)%i==0)
        {
            auto it=div1.lower_bound(i);
            if(*(it)>i)it--;
            if(a/(*(it))<=(a+b)/i)ans=min(ans,2LL*(i+((a+b)/i)));
            it=div2.lower_bound(i);
            if(*(it)>i)it--;
            if(b/(*(it))<=(a+b)/i)ans=min(ans,2LL*(i+((a+b)/i)));
        }
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
