#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
vector<ll> v;
void solve(ll x)
{
    if(x>1e9)return;
    if(x)v.push_back(x);
    solve(x*10+4);
    solve(x*10+7);
}
void test_case()
{
    ll n;
    cin>>n;
    solve(0);
    sort(v.begin(),v.end());
    ll it=lower_bound(v.begin(),v.end(),n)-v.begin();
    cout<<it+1;
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
