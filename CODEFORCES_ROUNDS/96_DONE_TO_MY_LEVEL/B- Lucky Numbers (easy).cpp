#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
set<ll> s;
void solve(ll num,ll c4,ll c7)
{
    if(num>1e10)return;
    if(num && c4==c7)s.insert(num);
    solve(num*10 + 4,c4+1,c7);
    solve(num*10 + 7,c4,c7+1);
}
void test_case()
{
    solve(0,0,0);
    ll n;
    cin>>n;
    cout<<(*s.lower_bound(n));
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