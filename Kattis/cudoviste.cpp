#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
char grid[60][60];
void test_case()
{
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    map<ll,ll> mp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(grid[i][j]!='#' && grid[i+1][j]!='#' && grid[i][j+1]!='#' && grid[i+1][j+1]!='#')
            {
                mp[(grid[i][j]=='X')+(grid[i+1][j]=='X')+(grid[i][j+1]=='X')+(grid[i+1][j+1]=='X')]++;
            }
        }
    }
    for(int i=0;i<5;i++)cout<<mp[i]<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
