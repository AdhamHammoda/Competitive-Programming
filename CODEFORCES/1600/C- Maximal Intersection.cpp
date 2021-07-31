#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
    ll n;
    cin>>n;
    multiset<ll>left;
    multiset<ll>right;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[i]={a,b};
        left.insert(a);
        right.insert(b);
    }
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        left.erase(left.find(v[i].first));
        right.erase(right.find(v[i].second));
        mx = max({mx, *right.begin() - *left.rbegin()});
        left.insert(v[i].first);
        right.insert(v[i].second);
    }
    cout<<mx;
}
int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
 