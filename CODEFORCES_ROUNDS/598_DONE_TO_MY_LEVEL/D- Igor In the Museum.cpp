#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll n,m;
char grid[2000][2000];
ll vis[2000][2000];
ll ans[100005];
ll cur=1;
ll dfs(ll x,ll y)
{
    if(x>=n || y>=m || x<0 || y<0 || vis[x][y]==cur)return 0;
    if(grid[x][y]=='*')return 1;
    vis[x][y]=cur;
    return dfs(x+1,y)+dfs(x-1,y)+dfs(x,y+1)+dfs(x,y-1);
}
void test_case()
{
    ll q;
    cin>>n>>m>>q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        a--,b--;
        if(vis[a][b])cout<<ans[vis[a][b]]<<endl;
        else cout<<(ans[cur] = dfs(a,b))<<endl;
        cur++;
    }
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