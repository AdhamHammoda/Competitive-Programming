#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-20-2021 , 6:50 pm
void test_case()
{
    char a;
    ll n,m;
    cin>>n>>m>>a;
    char grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    set<char>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==a)
            {
                if(j-1>=0)
                {
                    if(grid[i][j-1]!='.' && grid[i][j-1]!=a)s.insert(grid[i][j-1]);
                }
                if(i-1>=0)
                {
                    if(grid[i-1][j]!='.' && grid[i-1][j]!=a)s.insert(grid[i-1][j]);
                }
                if(j+1<m)
                {
                    if(grid[i][j+1]!='.' && grid[i][j+1]!=a)s.insert(grid[i][j+1]);
                }
                if(i+1<n)
                {
                    if(grid[i+1][j]!='.' && grid[i+1][j]!=a)s.insert(grid[i+1][j]);
                }
            }
        }
    }
    cout<<s.size();
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
