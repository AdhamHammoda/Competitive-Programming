#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2008;
ll a, n, m;
ll umb[N];
ll mp[N];
ll dp[N][N];
bool israin[N];
ll solve(int i, int j)
{
	if(i==a)return 0;
	ll &ret=dp[i][j];
	if (ret!=-1)return ret;
	ret = 1e15;
	if (israin[i])
	{
		if (j!=m)ret=min(ret,solve(i+1,j)+mp[j]);
	}
	else
	{
		if(j!=m)ret=min(ret,solve(i+1,j)+mp[j]);
		ret=min(ret,solve(i+1,m));
	}
	if(umb[i]!=-1)ret=min(ret,solve(i+1,umb[i])+mp[umb[i]]);
	return ret;
}
void test_case()
{
    cin>>a>>n>>m;
	for (int i=0; i<n; i++)
	{
	    ll x,y;
	    cin>>x>>y;
		for(int i=x; i+1<=y; i++)israin[i]=true;
	}
	for(int i=0;i<2005;i++)umb[i]=-1;
	for (int i=0; i<m; i++) {
		ll x,y;
		cin>>x>>y;
		mp[i]=y;
		if (umb[x]==-1)umb[x]=i;
		else if(mp[umb[x]]>y)umb[x]=i;
	}
	for(int i=0;i<2005;i++)for(int j=0;j<2005;j++)dp[i][j]=-1;
	ll ans=solve(0,m);
	if (ans>1e9)ans=-1;
	cout<<ans;
}
int main()
{
    int t=1;
//    cin>>t;
    while(t--)test_case();
}