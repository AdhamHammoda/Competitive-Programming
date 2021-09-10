/*
ID: allimel2
LANG: C++
PROG: gift1
*/
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<string,ll> val;
    map<string,ll> now;
    map<string,vector<string>>adj;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        ll a,b;
        cin>>val[s]>>b;
        for(int i=0;i<b;i++)
        {
            string tmp;
            cin>>tmp;
            adj[s].push_back(tmp);
        }
    }
    for(auto x:v)
    {
        if(!adj[x].size())continue;
        now[x]-=val[x];
        ll sz=adj[x].size();
        now[x]+=val[x]%sz;
        for(auto u:adj[x])
        {
            now[u]+=val[x]/sz;
        }
    }
    for(auto x:v)cout<<x<<" "<<now[x]<<endl;
}
int main()
{
    FIO
    ll t;
    freopen("gift1.in","rt",stdin);
    freopen("gift1.out","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
