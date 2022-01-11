#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
vector<pair<ll,pair<ll,ll>>> arr;
ll dp[105][60005];
ll solve(ll idx,ll rem)
{
    if(idx==arr.size() || rem<0)
    {
        return 0;
    }
    ll &ans=dp[idx][rem];
    if(ans!=-1)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1,rem);
    if(rem>=arr[idx].second.first)op2=solve(idx+1,rem+arr[idx].second.second)+1;
    return ans=max(op1,op2);
}
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
        else arr.push_back({-(max(a,abs(b))+b),{max(a,abs(b)),b}});
    }
    sort(pos.begin(),pos.end());
    sort(arr.begin(),arr.end());
    ll c=0;
    for(auto x:pos)
    {
        if(r<x.first)
        {
            break;
        }
        r+=x.second;
        c++;
    }
    for(int i=0;i<105;i++)
    for(int j=0;j<30005;j++)
    dp[i][j]=-1;
    cout<<c+solve(0,r);
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
