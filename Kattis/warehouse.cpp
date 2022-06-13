#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    set<pair<ll,string>>s;
    map<string,ll>m;
    ll n;
    cin>>n;
    while(n--)
    {
        string a;
        ll b;
        cin>>a>>b;
        m[a]+=b;
    }
    for(auto x:m)s.insert({-x.second,x.first});
    cout<<s.size()<<endl;
    for(auto x:s)cout<<x.second<<" "<<-x.first<<endl;
}
int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    FIO
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
