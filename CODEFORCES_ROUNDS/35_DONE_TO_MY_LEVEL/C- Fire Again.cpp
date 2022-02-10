#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
const ll N=2005;
ll lev[N][N];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)lev[i][j]=4e18;
    ll k;
    cin>>k;
    queue<pair<ll,ll>>q;
    while(k--)
    {
        ll x,y;
        cin>>x>>y;
        q.push({x,y});
        lev[x][y]=0;
    }
    ll dx[]={-1,1,0,0};
    ll dy[]={0,0,-1,1};
    ll mxlev=0;
    while(!q.empty())
    {
        auto x=q.front().first,y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            auto nx=x+dx[i],ny=y+dy[i];
            if(nx<=n && nx>=1 && ny<=m && ny>=1)
            {
                if(lev[nx][ny]>lev[x][y]+1)
                {
                    lev[nx][ny]=lev[x][y]+1;
                    mxlev=max(lev[nx][ny],mxlev);
                    q.push({nx,ny});
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(lev[i][j]==mxlev)cout<<i<<" "<<j,exit(0);
        }
    }

}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}