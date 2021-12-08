#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
map<string,vector<pair<string,double>>> adj;
priority_queue<pair<ll,string>> pq;
map<string,string>par;
map<string,double> dist;
map<string,bool> vis;
vector<string>ans;
map<string,double>cost;
ll j=0;
void dijkstra(string src,string dest)
{
    dist[src]=cost[src];
    pq.push({-dist[src],src});
    par[src]="hhhhhh";
    while(!pq.empty())
    {
        string u=pq.top().second;
        pq.pop();
        if(vis[u])continue;
        vis[u]=1;
        for(auto p:adj[u])
        {
            string v=p.first;
            double w=p.second;
            if(dist[v]>dist[u]+(2.0*w)+cost[v])
            {
                dist[v]=dist[u]+(2.0*w)+cost[v];
                pq.push({-dist[v],v});
                par[v]=u;
            }
        }
    }
    while(dest!=src)
    {
        ans.push_back(dest);
        dest=par[dest];
    }
    ans.push_back(src);
}
void test_case()
{
    if(j++)cout<<endl;
    ll n;
    cin>>n;
    vector<string> all;
    for(int i=0;i<n;i++)
    {
        string s;
        ll c;
        cin>>s>>c;
        cost[s]=c;
        all.push_back(s);
        dist[s]=4e18;
        vis[s]=0;
        par[s]=-1;
        adj[s].clear();
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        string u,v;
        double w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    ll q;
    cin>>q;
    cout<<"Map #"<<j<<endl;
    for(int i=1;i<=q;i++)
    {
        cout<<"Query #"<<i<<endl;
        string a,b;
        double pas;
        cin>>a>>b>>pas;
        ans.clear();
        for(auto s:all)
        {
            dist[s]=4e18;
            vis[s]=0;
            par[s]="hhhhhh";
        }
        dijkstra(a,b);
        reverse(ans.begin(),ans.end());
        for(int j=0;j<ans.size();j++)
        {
            cout<<ans[j]<<(j==ans.size()-1?"":" ");
        }
        cout<<endl;
        double allans=(1.1)*dist[b]/pas;
        cout<<"Each passenger has to pay : "<<fixed<<setprecision(2)<<allans<<" taka"<<endl;
    }
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
