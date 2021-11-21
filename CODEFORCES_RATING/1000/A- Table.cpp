#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-18-2021 , 6:55 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    bool grid[n][m];
    ll c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            c+=(grid[i][j] && (j==0 || j==m-1 || i==0 || i==n-1));
        }
    }
    c?cout<<2:cout<<4;
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
