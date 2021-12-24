#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll dx[]={-1,1,0,0};
ll dy[]={0,0,-1,1};
ll n,m,p;
bool valid(ll x,ll y){return (x<n && x>=0 && y<m && y>=0);}
deque<pair<ll,pair<ll,ll>>>dq,v;
void test_case()
{
    cin>>n>>m>>p;
    ll grid[n][m];
    ll dist[n][m];
    ll tmpdist[n][m];
    map<ll,vector<pair<ll,ll>>>pos;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            dist[i][j]=1e18;
            tmpdist[i][j]=-1;
            if(grid[i][j]==1)dist[i][j]=i+j;
            pos[grid[i][j]].push_back({i,j});
        }
    }
    for(int i=1;i<p;i++)
    {
        ll p1=pos[i].size();
        ll p2=pos[i+1].size();
        if(p1*p2<=n*m)
        {
            for(auto y:pos[i+1])
            {
                for(auto x:pos[i])
                {
                    dist[y.first][y.second]=min(dist[y.first][y.second]
                ,dist[x.first][x.second]+abs(x.first-y.first)+abs(x.second-y.second));
                }
            }
            continue;
        }
        dq.clear(),v.clear();
        for(int k=0;k<n;k++){for(int u=0;u<m;u++)tmpdist[k][u]=-1;}
        for(auto x:pos[i])dq.push_back({dist[x.first][x.second],x});
        sort(dq.begin(),dq.end());
        auto tp=dq.front().second;
        tmpdist[tp.first][tp.second]=dq.front().first;
        v.push_back(dq.front());
        dq.pop_front();
        while(!v.empty())
        {
            auto p=v.front().second;
            ll tmpd=v.front().first;
            v.pop_front();
            while(dq.size())
            {
                if(dq.front().first<=tmpd)v.push_back(dq.front()),dq.pop_front();
                else break;
            }
            for(int k=0;k<4;k++)
            {
                if(valid(p.first+dx[k],p.second+dy[k])
                && tmpdist[p.first+dx[k]][p.second+dy[k]]==-1)
                {
                    tmpdist[p.first+dx[k]][p.second+dy[k]]=tmpd+1;
                    v.push_back({tmpd+1,{p.first+dx[k],p.second+dy[k]}});
                }
            }
        }
        for(auto x:pos[i+1])dist[x.first][x.second]=tmpdist[x.first][x.second];
    }
    cout<<dist[pos[p][0].first][pos[p][0].second];
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