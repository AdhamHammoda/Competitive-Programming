#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,r,av;
    cin>>n>>r>>av;
    ll tot=n*av;
    multiset<pair<ll,ll>>ms;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        ms.insert({b,a});
        sum+=a;
    }
    ll diff=max(0LL,tot-sum);
    ll ans=0;
    for(auto x:ms)
    {
        ans+=min(diff,(r-x.second))*x.first;
        diff-=min(diff,(r-x.second));
        if(!diff)break;
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}