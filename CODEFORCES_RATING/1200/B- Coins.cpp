#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Lazy
/// 7-16-2021 , 8:24 pm
vector<ll> adj[4];
vector<ll>topsort;
bool vis[4],stc[4];
ll cyc=0;
void dfs(ll u)
{
    vis[u]=1;
    stc[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
        if(stc[v])cyc++;
    }
    stc[u]=0;
    topsort.push_back(u);
}
void test_case()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1[1]=='<')adj[s1[0]-'A'].push_back(s1[2]-'A');
    else adj[s1[2]-'A'].push_back(s1[0]-'A');
    if(s2[1]=='<')adj[s2[0]-'A'].push_back(s2[2]-'A');
    else adj[s2[2]-'A'].push_back(s2[0]-'A');
    if(s3[1]=='<')adj[s3[0]-'A'].push_back(s3[2]-'A');
    else adj[s3[2]-'A'].push_back(s3[0]-'A');
    for(int i=0;i<3;i++)
    {
        if(!vis[i])dfs(i);
    }
    if(cyc)cout<<"Impossible";
    else
    {
        reverse(topsort.begin(),topsort.end());
        for(auto x:topsort)
        {
            char a=x+'A';
            cout<<a;
        }
    }
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
