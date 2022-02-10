#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll lev[N],ans[N];
vector<ll> adj[N];
void bfs(vector<ll> v1,vector<ll> v2)
{
    queue<ll> q;
    for(auto x:v1)lev[x]=4e18;
    for(auto x:v2)q.push(x),lev[x]=0;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(lev[v]>lev[u]+1)lev[v]=lev[u]+1,q.push(v);
        }
    }
    for(auto x:v1)ans[x]=(lev[x]!=4e18?lev[x]:-1);
}
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    vector<ll> odd,even;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i+arr[i]<n)adj[i+arr[i]].push_back(i);
        if(i-arr[i]>=0)adj[i-arr[i]].push_back(i);
        arr[i]%2?odd.push_back(i):even.push_back(i);
    }
    bfs(odd,even);
    bfs(even,odd);
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
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
