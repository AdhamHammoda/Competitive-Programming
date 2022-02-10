#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll n,m,k;
const ll N=1e5+5;
vector<ll> arr[N];
vector<ll> v[N];
vector<ll> st[N];
vector<ll> en[N];
ll dp[N][202];
ll solve(ll idx,ll amount)
{
    if(idx>n)return 0;
    ll &ans=dp[idx][amount];
    if(~ans)return ans;
    ll op1=4e18,op2=4e18,op3=4e18,op4=4e18;
    if(!v[idx].size())op1=solve(idx+1,amount);
    if(amount)
    {
        op2=solve(idx+1,amount-1);
        if(v[idx].size())op3=solve(v[idx][1]+1,amount)+v[idx][0];
    }
    else if(v[idx].size())
    {
        op4=solve(v[idx][1]+1,amount)+v[idx][0];
    }
    return ans=min({op1,op2,op3,op4});
}
void test_case()
{
    cin>>n>>m>>k;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<k;i++)
    {
        ll s,t,d,w;
        cin>>s>>t>>d>>w;
        arr[i].push_back(d);
        arr[i].push_back(w);
        st[s].push_back(i);
        en[t+1].push_back(i);
    }
    multiset<pair<ll,ll>>ms;
    for(int i=1;i<=n;i++)
    {
        for(auto x:st[i])ms.insert({arr[x][1],arr[x][0]});
        for(auto x:en[i])ms.erase(ms.find({arr[x][1],arr[x][0]}));
        if(ms.empty())continue;
        auto it=*ms.rbegin();
        v[i].push_back(it.first);
        v[i].push_back(it.second);
    }
    cout<<solve(1,m);
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
