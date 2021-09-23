#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll zr,zc;
    cin>>zr>>zc;
    char grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        string tmp="";
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<zc;k++)
            {
                tmp+=grid[i][j];
            }
        }
        for(int k=0;k<zr;k++)cout<<tmp<<endl;
    }
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
