#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-11-2021 , 3:48 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    char grid[n][m];
    set<ll> row;
    set<ll> column;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='S')
            {
                row.insert(i);
                column.insert(j);
            }
        }
    }
    ll c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           c+=!(row.find(i)!=row.end() && column.find(j)!=column.end());
        }
    }
    cout<<c;
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
