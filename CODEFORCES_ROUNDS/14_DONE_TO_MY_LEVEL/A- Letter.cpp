#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    char grid[n][m];
    ll mnr=1e18,mnc=1e18,mxr=0,mxc=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='*')
            {
                mnr=min(mnr,i);
                mnc=min(mnc,j);
                mxc=max(mxc,j);
                mxr=max(mxr,i);
            }
        }
    }
    for(int i=mnr;i<=mxr;i++)
    {
        for(int j=mnc;j<=mxc;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}