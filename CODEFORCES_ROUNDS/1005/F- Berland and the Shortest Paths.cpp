#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll lev[N];
vector<ll> adj[N],can[N],ind[N];
ll n,m,k;
queue<ll> q;
void bfs(ll st)
{
    lev[st]=0;
    q.push(st);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        int i=0;
        for(auto v:adj[u])
        {
            if(lev[v]>lev[u]+1)lev[v]=lev[u]+1,q.push(v);
            if(lev[v]==lev[u]+1)can[v].push_back(ind[u][i]);
            i++;
        }
    }
}
string r="";
vector<string>ans;
void rec(ll idx)
{
    if(idx==n+1)
    {
        ans.push_back(r);
        if(ans.size()==k)
        {
            cout<<ans.size()<<endl;
            for(auto x:ans)cout<<x<<endl;
            exit(0);
        }
        return;
    }
    for(auto x:can[idx])
    {
        r[x]='1';
        rec(idx+1);
        r[x]='0';
    }
}
void test_case()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)lev[i]=4e18;
    for(int i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v),adj[v].push_back(u);
        ind[u].push_back(i),ind[v].push_back(i);
    }
    bfs(1);
    r=string(m,'0');
    rec(2);
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
