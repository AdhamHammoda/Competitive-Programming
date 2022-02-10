#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
vector<ll> adj[4];
bool vis[4],stc[4],cyc;
deque<char>topsort;
void dfs(ll u)
{
    vis[u]=1,stc[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])dfs(v);
        if(stc[v])cyc=1;
    }
    stc[u]=0;
    topsort.push_front('A'+u);
}
void test_case()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll a=s1[0]-'A',b=s1[2]-'A',c=s2[0]-'A',d=s2[2]-'A',e=s3[0]-'A',f=s3[2]-'A';
    s1[1]=='<'?adj[a].push_back(b):adj[b].push_back(a);
    s2[1]=='<'?adj[c].push_back(d):adj[d].push_back(c);
    s3[1]=='<'?adj[e].push_back(f):adj[f].push_back(e);
    for(int i=0;i<3;i++)if(!vis[i])dfs(i);
    if(cyc)cout<<"Impossible",exit(0);
    for(auto x:topsort)cout<<x;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}