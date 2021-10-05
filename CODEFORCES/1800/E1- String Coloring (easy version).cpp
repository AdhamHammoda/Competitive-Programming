#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
vector<ll> adj[200];
bool vis[200],bip=1,col[200];
void dfs(ll u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            col[v]=!col[u];
            dfs(v);
        }
        if(vis[v] && col[v]==col[u])bip=0;
    }
}
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[j]>s[i])adj[i].push_back(j),adj[j].push_back(i);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])dfs(i);
    }
    if(!bip)cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<col[i];
    }
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
