#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
bool vis[200][200];
char grid[200][200];
ll n,m;
void dfs(ll x,ll y)
{
    if(x<0 || y<0 || x>=n || y>=m || vis[x][y] || grid[x][y]=='.')return;
    vis[x][y]=1;
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
    dfs(x+1,y+1);
    dfs(x-1,y-1);
    dfs(x+1,y-1);
    dfs(x-1,y+1);
}
void test_case()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    ll c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='#' && !vis[i][j])
            {
                c++;
                dfs(i,j);
            }
        }
    }
    cout<<c<<endl;
}
int main()
{
    FIO
    int t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
