#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,r;
    cin>>n>>r;
    vector<pair<ll,ll>>pos;
    multiset<pair<ll,pair<ll,ll>>>neg;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(b>=0)pos.push_back({a,b});
        else neg.insert({-(max(a,abs(b))+b),{max(a,abs(b)),b}});
    }
    sort(pos.begin(),pos.end());
    for(auto x:pos)
    {
        if(r<x.first)
        {
            cout<<"NO";
            return;
        }
        r+=x.second;
    }
    for(auto x:neg)
    {
        if(r<x.second.first)
        {
            cout<<"NO";
            return;
        }
        r+=x.second.second;
    }
    cout<<"YES";
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