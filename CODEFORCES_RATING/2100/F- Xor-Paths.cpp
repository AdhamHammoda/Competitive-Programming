#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll n,m,k;
map<ll,ll> mp[22][22];
ll arr[22][22];
ll ans=0;
ll mid=0;
void solve1(ll i,ll j,ll xo)
{
    if(i>n || j>m)return;
    xo ^= arr[i][j];
    if(i+j-2==mid)
    {
        mp[i][j][xo]++;
        return;
    }
    solve1(i+1,j,xo);
    solve1(i,j+1,xo);
}
void solve2(ll i,ll j,ll xo)
{
    if(!i || !j)return;
    if(i+j-2==mid)
    {
        ans+=mp[i][j][xo^k];
        return;
    }
    xo ^= arr[i][j];
    solve2(i-1,j,xo);
    solve2(i,j-1,xo);
}

void test_case()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    mid=(n+m-2)/2;
    solve1(1,1,0);
    solve2(n,m,0);
    cout<<ans;
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
