#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll arr[1005][1005];
ll dis[1005][1005];
priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>>pq;
ll dx[]={-1,1,0,0};
ll dy[]={0,0,-1,1};
ll n,m;
void dijkstra()
{
    dis[0][0]=arr[0][0];
    pq.push({arr[0][0],{0,0}});
    while(!pq.empty())
    {
        ll x=pq.top().second.first;
        ll y=pq.top().second.second;
        ll d=pq.top().first;
        pq.pop();
        if(dis[x][y]!=d)continue;
        for(int i=0;i<4;i++)
        {
            auto vx=x+dx[i],vy=y+dy[i];
            if(vx>=0 && vx<n && vy>=0 && vy<m)
            {
                if(dis[vx][vy]>dis[x][y]+arr[vx][vy])
                {
                    dis[vx][vy]=dis[x][y]+arr[vx][vy];
                    pq.push({dis[vx][vy],{vx,vy}});
                }
            }
        }
    }
}
void test_case()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            dis[i][j]=4e18;
        }
    }
    dijkstra();
    cout<<dis[n-1][m-1]<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
