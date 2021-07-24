#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation, Graphs
/// 7-22-2021, 10:31 pm
char grid[50][50];
bool vis[50][50];
ll n,m;
set<char>s;
ll c=0;
void dfs(ll x,ll y,ll prevx,ll prevy)
{
    if(x<0 || y<0 || x>=n || y>=m)return;
    if(!vis[x][y] && s.find(grid[x][y])!=s.end())
    {
        vis[x][y]=1;
        dfs(x+1,y,x,y);
        dfs(x,y-1,x,y);
        dfs(x,y+1,x,y);
        if(x-prevx==1)cout<<"forth";
        if(y-prevy==-1)cout<<"right";
        if(y-prevy==1)cout<<"left";
        if(c<6)cout<<" ";
        c++;
    }
}
void test_case()
{
    c=0;
    ll stx=0,sty=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            vis[i][j]=0;
            cin>>grid[i][j];
            if(grid[i][j]=='#')
            {
                stx=i;
                sty=j;
            }
        }
    }
    dfs(stx,sty,stx,sty);
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    s.insert('I');
    s.insert('E');
    s.insert('H');
    s.insert('O');
    s.insert('V');
    s.insert('A');
    s.insert('@');
    s.insert('#');
    while(t--)
    {
        cin>>n>>m;
        test_case();
        cout<<endl;
    }
}
