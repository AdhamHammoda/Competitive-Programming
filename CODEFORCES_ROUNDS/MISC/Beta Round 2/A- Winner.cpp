#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    map<ll,vector<pair<ll,string>>> m;
    map<string,ll> mm;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        ll score;
        cin>>a>>score;
        mm[a]+=score;
        m[-mm[a]].push_back({i,a});
    }
    ll mx=0;
    for(auto x:mm)mx=max(mx,x.second);
    set<string> all;
    for(auto x:mm)if(x.second==mx)all.insert(x.first);
    ll mn=1e18;
    string ans="";
    for(auto x:m)
    {
        if(-x.first<mx)cout<<ans,exit(0);
        for(auto y:x.second)
        {
            if(all.find(y.second)!=all.end() && y.first<mn)
            {
                mn=y.first;
                ans=y.second;
            }
        }
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}