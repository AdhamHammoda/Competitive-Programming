#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
char grid[20][20];
ll vis[20][20];
void test_case()
{
    ll n=8;
    deque<pair<char,pair<ll,ll>>>q;
    q.push_back({'M',{8,1}});
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=n-1;j>=1;j--)
        {
            if(grid[i][j]=='S')q.push_back({'S',{i,j}});
        }
    }

    ll dx[]={0,-1,1,0,0,1,1,-1,-1};
    ll dy[]={0,-0,0,1,-1,-1,1,-1,1};
    while(!q.empty())
    {
        auto x=q.front().second.first;
        auto y=q.front().second.second;
        char a=q.front().first;
        q.pop_front();
        if(a=='M' && grid[x][y]=='S')continue;
        grid[x][y]='.';
        if(a=='M')
        {
            for(int i=0;i<9;i++)
            {
                auto nx=x+dx[i];
                auto ny=y+dy[i];
                if(nx<1 || nx>8 || ny<1 || ny>8)continue;
                if((vis[nx][ny] && !(nx==x && ny==y)) || grid[nx][ny]=='S')continue;
                if(nx==1 && ny==8)cout<<"WIN",exit(0);
                q.push_back({'M',{nx,ny}});
                grid[nx][ny]='M';
                vis[nx][ny]=1;
            }
        }
        else
        {
            ll nx=x+1;
            vis[x][y]=0;
            if(nx==n)
            {
                if(grid[nx][y]=='M')vis[nx][y]=1,grid[nx][y]='S';
            }
            if(nx>n)continue;
            vis[nx][y]=0;
            grid[nx][y]='S';
            q.push_back({'S',{nx,y}});
        }
    }
    cout<<"LOSE";

}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}