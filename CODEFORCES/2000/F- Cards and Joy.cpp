#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
ll f[500];
ll c[5000];
ll h[11];
ll dp[500][5000][11];
ll solve(ll i,ll j,ll rem)
{
	if (i==n || j==n*k)
    {
        return h[rem];
    }
	ll &ret=dp[i][j][rem];
	if(ret!=-1) return ret;
	ret=-1e5;
	if(rem<k && f[i]==c[j])ret=max(ret,solve(i,j+1,rem+1));
	ret=max(ret,solve(i+1,j,0)+h[rem]);
	ret=max(ret,solve(i,j+1,rem));
	return ret;
}
void test_case()
{
    cin>>n>>k;
	for(int i=0;i<n*k;i++)
	{
		cin>>c[i];
	}
	sort(c,c+n*k);
	for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }
    sort(f,f+n);
	for(int i=1;i<=k;i++)
    {
        cin>>h[i];
    }
    for(int i=0;i<500;i++)
    {
        for(int j=0;j<5000;j++)
        {
            for(int k=0;k<11;k++)
            {
                dp[i][j][k]=-1;
            }
        }
    }
	cout<<solve(0,0,0);
}
int main()
{
	ll t;
//	cin>>t;
	t=1;
	while(t--)test_case();
}