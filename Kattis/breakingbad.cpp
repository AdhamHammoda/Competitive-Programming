#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=1e5+5;
map<string,vector<string>>adj;
map<string,bool> vis,col;
bool isbi=true;
void dfs(string u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            col[v]=!col[u];
            dfs(v);
        }
        else if(col[v]==col[u])isbi=false;
    }
}
void test_case()
{
    ll n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(auto x:v)
    {
        if(!vis[x])dfs(x);
    }
    if(!isbi)cout<<"impossible";
    else
    {
        for(auto x:v)
        {
            if(col[x])cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:v)
        {
            if(!col[x])cout<<x<<" ";
        }
    }
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
