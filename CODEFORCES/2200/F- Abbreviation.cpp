#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N = 305;
bool eq[N][N];
ll mx[N][N],dp[N][N],sum[N],n;
map<string,vector<ll>>mp;
ll get(ll le,ll ri)
{
    ll tm=sum[ri];
    if(le)tm-=sum[le-1];
    return tm;
}
ll abbr(ll x,ll y)
{
    return get(x,x+y-1)-1;
}
ll solve(ll idx,ll sz)
{
    ll &ans=dp[idx][sz];
    if(ans!=-1)return ans;
    ans=abbr(idx,sz);
    ll op1=0;
    for(int i=idx+1;i<n;i++)
    {
        if(mx[idx][i]>=sz)op1=max(op1,solve(i,sz));
    }
    ans+=op1;
    return ans;
}
void test_case()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s].push_back(i);
        sum[i]+=s.size();
        if(i)sum[i]+=sum[i-1];
    }
    for(auto x:mp)
    {
        auto tm=x.second;
        for(auto u:tm)
        {
            for(auto v:tm)
            {
                eq[u][v]=1;
            }
        }
    }
    ll tmp=sum[n-1]+n-1;
    ll ans=tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int x=0;x<n;x++)
            {
                if(j+x==n || i+x==j || !eq[i+x][j+x])break;
                mx[i][j]++;
            }
        }
    }
    for(int i=0;i<305;i++)
    for(int j=0;j<305;j++)
    dp[i][j]=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(!mx[i][j])continue;
            for(int k=1;k<mx[i][j]+1;k++)
            {
                ans=min(ans,tmp-solve(j,k)-abbr(i,k));
            }
        }
    }
    cout<<ans;
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
