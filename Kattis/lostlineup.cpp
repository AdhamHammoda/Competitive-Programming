#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<pair<ll,ll>>s;
    for(int i=2;i<=n;i++)
    {
        ll a;
        cin>>a;
        s.insert({a,i});
    }
    cout<<1<<" ";
    for(auto x:s)cout<<x.second<<" ";
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
