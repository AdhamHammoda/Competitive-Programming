///       ______        __________                    _____   _____        _____
///      ///  \\\      ||__||   \\\    |||     |||  ||     || |||\\\      ///|||
///     ///    \\\     ||__||    \\\   |||_____|||  ||     || ||| \\\    /// |||
///    ///______\\\    ||__||     \\\  |||_____|||  ||     || |||  \\\  ///  |||
///   ///________\\\   ||__||     ///  |||_____|||  ||     || |||   \\\///   |||
///  ///          \\\  ||__||    ///   |||     |||  ||     || |||            |||
/// ///            \\\ ||__||___///    |||     |||  ||_____|| |||            |||

#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=2e5+5;
ll lev[N];
ll n;
ll par[N];
vector<ll>adj[N];
void path(ll u)
{
    if(u==-1)return;
    path(par[u]);
    cout<<u<<" ";
}
void bfs(ll start)
{
    lev[start]=0;
    par[start]=-1;
    queue<ll>q;
    q.push(start);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(lev[v]>lev[u]+1)
            {
                lev[v]=lev[u]+1;
                par[v]=u;
                q.push(v);
            }
        }
    }
    path(n);
}
void test_case()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        lev[i]=4e18;
        ll x;
        cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    bfs(1);
}
int main()
{
    FIO
//  freopen("input.txt","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}