#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
char grid[100][100];
ll n,m;
ll func(ll r,ll c)
{
    for(int i=0;i<c;i++)
    {
        if(i%2==0)grid[r][i]='1';
        else grid[r][i]='0';
    }
}
ll func2(ll r,ll c)
{
    for(int i=0;i<c;i++)
    {
        grid[r][i]='0';
    }
}
ll func3(ll r,ll c)
{
    for(int i=0;i<c;i++)
    {
        if(i==0 || c==m-1)grid[r][i]='1';
        else grid[r][i]='0';
    }
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            grid[i][j]='0';
        }
    }
    if(n==2)
    {
        for(int j=0;j<m;j++)
        {
            if(j%2==0)grid[0][j]='1';
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    for(int j=0;j<m;j++)
    {
        if(j%2==0)grid[0][j]='1';
    }
    for(int j=0;j<m;j++)
    {
        if(j%2==0)grid[n-1][j]='1';
    }
    for(int i=n-3;i>=0;i-=2)
    {
        if(i-1==0)break;
        grid[i][0]='1';
        if(grid[i][m-2]!='1')grid[i][m-1]='1';
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}