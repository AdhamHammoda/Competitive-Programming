#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-14-2021 , 1:16 am
void test_case()
{
    ll n,m;
    cin>>n>>m;
    char grid[n][m];
    ll mnrow=-1,mxrow=-1,mncolumn=1e9,mxcolumn=-1;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='*' && mnrow==-1)
            {
                mnrow=i;
            }
            if(grid[i][j]=='*')
            {
                mncolumn=min(mncolumn,j);
                mxcolumn=max(mxcolumn,j);
                mxrow=max(mxrow,i);
            }
        }
    }
    for(int i=mnrow;i<=mxrow;i++)
    {
        for(int j=mncolumn;j<=mxcolumn;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
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
