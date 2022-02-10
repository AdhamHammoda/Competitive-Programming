#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string st;
    cin>>st;
    stringstream is(st);
    ll a;
    char b;
    vector<ll> v;
    set<ll> s;
    while(is>>a)
    {
        is>>b;
        s.insert(a);
    }
    for(auto x:s)v.push_back(x);
    string ans="";
    ans+=to_string(v[0]);
    ll c=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-v[i-1]!=1)
        {
            if(c>1)ans+="-",ans+=to_string(v[i-1]);
            ans+=",",ans+=to_string(v[i]);
            c=1;
            continue;
        }
        c++;
    }
    if(v.size()>=2)if(v.back()-v[v.size()-2]==1)ans+="-",ans+=to_string(v.back());
    cout<<ans;

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