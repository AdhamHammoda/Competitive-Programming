#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=2e5+5;
ll arr[N],arr2[N];
map<ll,ll>pos1,pos2,vis;
vector<ll> tmp;
void dfs(ll u)
{
    tmp.push_back(pos1[u]);
    vis[u]=1;
    if(!vis[arr[pos2[u]]])dfs(arr[pos2[u]]);
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i],arr2[i]=arr[i],pos1[arr[i]]=i;
    sort(arr2+1,arr2+n+1);
    for(int i=1;i<=n;i++)pos2[arr2[i]]=i;
    vector<pair<ll,vector<ll>>>ans;
    for(int i=1;i<=n;i++)
    {
        if(!vis[arr[i]])
        {
            dfs(arr[i]);
            ans.push_back({tmp.size(),tmp});
            tmp.clear();
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)
    {
        cout<<x.first<<" ";
        for(auto y:x.second)cout<<y<<" ";
        cout<<endl;
    }

}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}