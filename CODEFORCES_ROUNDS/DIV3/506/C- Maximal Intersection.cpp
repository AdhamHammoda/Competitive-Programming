#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    multiset<ll> lef,rig;
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    ll mx=0;
    for(auto &[x,y]:v)cin>>x>>y,lef.insert(x),rig.insert(y);
    for(auto [x,y]:v)
    {
        lef.erase(lef.find(x));
        rig.erase(rig.find(y));
        mx=max(mx,(*rig.begin())-(*lef.rbegin()));
        lef.insert(x);
        rig.insert(y);
    }
    cout<<mx;

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
