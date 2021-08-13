#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
map<ll,ll> v[30][30];
ll arr[30][30];
ll n,m,k,mid,ans;
void solvedownright(ll x,ll y,ll num,ll c)
{
    num^=arr[x][y];
    if(c==mid)
    {
        v[x][y][num]++;
        return;
    }
    if(x+1<n)solvedownright(x+1,y,num,c+1);
    if(y+1<m)solvedownright(x,y+1,num,c+1);
}
void solveupleft(ll x,ll y,ll num,ll c)
{
    if(c==n+m-2-mid)
    {
        if(v[x][y].count(k^num))
        {
            ans+=v[x][y][k^num];
        }
        return;
    }
    if(x>0)solveupleft(x-1,y,num^arr[x][y],c+1);
    if(y>0)solveupleft(x,y-1,num^arr[x][y],c+1);
}
void test_case()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    mid=(n+m-2)/2;
    solvedownright(0,0,0,0);
    solveupleft(n-1,m-1,0,0);
    cout<<ans;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
