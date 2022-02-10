#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
vector<ll> adj[N],adj2[N];
bool vis[N];
vector<ll> ans;
ll n;
bool conn(ll x,ll y)
{
    if(x==y)return 1;
    for(auto v:adj[x])if(v==y)return 1;
    return 0;
}
void test_case()
{
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        sort(adj[i].begin(),adj[i].end());
        if(adj[i].size()!=4)cout<<-1,exit(0);
    }
    for(int li=0;li<4;li++)
    {
        for(int lj=0;lj<4;lj++)
        {
            if(li==lj)continue;
            ans.clear();
            ans.push_back(1);
            ans.push_back(adj[1][li]);
            ans.push_back(adj[1][lj]);
            for(int i=3;i<n;i++)
            {
                ans.push_back(0);
                for(int j=0;j<4;j++)
                {
                    ans[i]=adj[ans[i-1]][j];
                    if(!conn(ans[i-3],ans[i])
                    && conn(ans[i-2],ans[i])
                    && conn(ans[i-1],ans[i]))break;
                }
            }
            if(ans.size()!=n)continue;
            ans.push_back(ans[0]);
            ans.push_back(ans[1]);
            for(int i=1;i<=n;i++)adj2[i].clear();
            for(int i=0;i<ans.size()-2;i++)
            {
                adj2[ans[i]].push_back(ans[i+1]);
                adj2[ans[i]].push_back(ans[i+2]);
                adj2[ans[i+1]].push_back(ans[i]);
                adj2[ans[i+2]].push_back(ans[i]);
            }
            bool can=true;
            for(int i=1;i<=n;i++)
            {
                sort(adj2[i].begin(),adj2[i].end());
                if(adj[i]!=adj2[i])can=false;
            }
            if(can)
            {
                ans.pop_back();
                ans.pop_back();
                for(auto x:ans)cout<<x<<" ";
                exit(0);
            }
        }
    }
    cout<<-1;
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