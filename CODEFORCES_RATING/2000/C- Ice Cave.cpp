#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , graphs
/// 7-27-2021 , 2:26 pm
ll n,m;
ll stx,sty,endx,endy;
char grid[600][600];
bool vis[600][600];
bool bol=false;
bool crack=false;
ll rec=0;
bool dfs(ll x,ll y)
{
    rec++;
    if(x<1 || y<1 || x>n || y>m)return false;
    if(x==endx && y==endy)
    {
        if(vis[x][y] && grid[x][y]=='X')return true;
        else if(!vis[x][y] && crack && rec>=2)return true;
        else if(!vis[x][y])
        {
            vis[x][y]=1;
            grid[x][y]='X';
            bol|=dfs(x,y+1);
            bol|=dfs(x,y-1);
            bol|=dfs(x+1,y);
            bol|=dfs(x-1,y);
        }
        else return false;
    }
    if(x==stx && y==sty && !vis[x][y])
    {
        vis[x][y]=1;
        bol|=dfs(x-1,y);
        bol|=dfs(x,y+1);
        bol|=dfs(x,y-1);
        bol|=dfs(x+1,y);
    }
    if(!vis[x][y] && grid[x][y]=='.')
    {
        vis[x][y]=1;
        grid[x][y]='X';
        bol|=dfs(x,y+1);
        bol|=dfs(x,y-1);
        bol|=dfs(x+1,y);
        bol|=dfs(x-1,y);
    }
    return bol;
}
void test_case()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
        }
    }
    cin>>stx>>sty>>endx>>endy;
    if(grid[endx][endy]=='X')crack=true;
    dfs(stx,sty)?cout<<"YES":cout<<"NO";
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
