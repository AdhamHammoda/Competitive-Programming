#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    map<string,set<pair<ll,string>>>m;
    ll n;
    cin>>n;
    while(n--)
    {
        string a,b;
        ll c;
        cin>>a>>c>>b;
        m[b].insert({c,a});
    }
    set<string> s;
    for(auto x:m)s.insert((*(x.second).rbegin()).second);
    cout<<s.size()<<endl;
    for(auto x:s)cout<<x<<endl;
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
