#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
ll dist(pair<ll,ll> p1,pair<ll,ll> p2){return abs(p1.first-p2.first)+abs(p1.second-p2.second);}
vector<ll> lev;
map<ll,deque<pair<ll,ll>>> all;
ll dp[N][2];
ll solve(ll idx,bool lst)
{
    if(idx==lev.size()-1)return 0;
    ll &ans=dp[idx][lst];
    if(~ans)return ans;
    ll op1=4e18,op2=4e18,op3=4e18,op4=4e18;
    pair<ll,ll> p1,p2,p3,p4;
    p1=all[lev[idx]].front();
    p2=all[lev[idx]].back();
    p3=all[lev[idx+1]].front();
    p4=all[lev[idx+1]].back();
    ll tmp=dist(p3,p4);
    if(lst)
    {
        op1=solve(idx+1,1)+dist(p2,p3)+tmp;
        op2=solve(idx+1,0)+dist(p2,p4)+tmp;
    }
    else
    {
        op3=solve(idx+1,1)+dist(p1,p3)+tmp;
        op4=solve(idx+1,0)+dist(p1,p4)+tmp;
    }
    return ans=min({op1,op2,op3,op4});
}
void test_case()
{
    memset(dp,-1,sizeof dp);
    ll n;
    cin>>n;
    all[0].push_back({0,0});
    while(n--)
    {
        ll x,y;
        cin>>x>>y;
        all[max(x,y)].push_back({x,-y});
    }
    for(auto &x:all)
    {
        lev.push_back(x.first);
        sort(x.second.begin(),x.second.end());
        for(auto &y:x.second)y.second*=-1;
    }
    cout<<solve(0,0);
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
