#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
char grid[100][100];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
        }
    }
    ll c=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(grid[i][j]=='P')
            {
                if(grid[i][j-1]=='W')
                {
                    c++;
                    grid[i][j-1]=' ';
                    continue;
                }
                if(grid[i-1][j]=='W')
                {
                    c++;
                    grid[i-1][j]=' ';
                    continue;
                }
                if(grid[i+1][j]=='W')
                {
                    c++;
                    grid[i+1][j]=' ';
                    continue;
                }
                if(grid[i][j+1]=='W')
                {
                    c++;
                    grid[i][j+1]=' ';
                    continue;
                }
            }
        }
    }
    cout<<c;
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