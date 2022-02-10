#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll a,b;
ll ans=0,aa=0,bb=0;
void solve(ll x,ll y)
{
    if(x>a || y>b)return;
    if(x*y>=ans && x>aa && (5*x>=4*y && 5*y>=4*x))ans=x*y,aa=x,bb=y;
}
void test_case()
{
    cin>>a>>b;
    for(ll i=0;i<=63;i++)
    {
        ll tmp=(1LL<<i);
        solve(tmp,min((ll)ceil(1.25*tmp),b));
        solve(min((ll)floor(1.25*tmp),a),tmp);
    }
    cout<<aa<<" "<<bb;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}