#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll>vis;
map<pair<ll,ll>,ll>freq;
void test_case()
{
    ll mnl=1e18,mxl=-1e18,mnr=1e18,mxr=-1e18;
    set<pair<ll,ll>>all;
    for(int i=0;i<4;i++)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        mnl=min({mnl,x1,x2});
        mnr=min({mnr,y1,y2});
        mxl=max({mxl,x1,x2});
        mxr=max({mxr,y1,y2});
        freq[{x1,y1}]++;
        freq[{x2,y2}]++;
        if(x1==x2 && y1==y2)cout<<"NO",exit(0);
        if(x1!=x2 && y1!=y2)cout<<"NO",exit(0);
        if(vis[{{x1,y1},{x2,y2}}]
        || vis[{{x2,y2},{x1,y1}}])cout<<"NO",exit(0);
        vis[{{x1,y1},{x2,y2}}]=1;
        all.insert({x1,y1});
        all.insert({x2,y2});
    }
    if(mnl==mxl || mnr==mxr)cout<<"NO",exit(0);
    for(auto x:freq)if(x.second!=2)cout<<"NO",exit(0);
    set<pair<ll,ll>> s2;
    s2.insert({mnl,mnr});
    s2.insert({mnl,mxr});
    s2.insert({mxl,mnr});
    s2.insert({mxl,mxr});
    if(all.size()!=4 || s2!=all || mnl==mxl || mnr==mxr)cout<<"NO",exit(0);
    cout<<"YES";
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