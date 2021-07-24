#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation, Graphs
/// 7-22-2021, 10:06 pm
char grid[50][50];
bool vis[50][50];
ll n,k;
void dfs(ll x,ll y)
{
    if(x<0 || y<0 || x>=n || y>=n)return;
    if(!vis[x][y] && grid[x][y]=='1')
    {
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
}
void test_case()
{
    ll cmp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vis[i][j]=0;
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!vis[i][j] && grid[i][j]=='1')
            {
                cmp++;
                dfs(i,j);
            }
        }
    }
    cout<<"Image number "<<++k<<" contains "<<cmp<<" war eagles."<<endl;
    cmp=0;
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
//    t=1;
    while(cin>>n)
    {
        test_case();
    }
}
