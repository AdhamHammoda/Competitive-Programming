#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
char grid[302][302];
void test_case()
{
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
        }
    }
    ll all=0;
    for(int u=1;u<=300;u++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(grid[i][j]=='*')
                {
                    if(i-u>=1 && i+u<=n && j-u>=1 && j+u<=m)
                    {
                        if(grid[i][j+u]=='*'
                        && grid[i][j-u]=='*'
                        && grid[i+u][j]=='*'
                        && grid[i-u][j]=='*')
                        {
                            if(k==1)
                            {
                                cout<<i<<" "<<j<<endl;
                                cout<<i-u<<" "<<j<<endl;
                                cout<<i+u<<" "<<j<<endl;
                                cout<<i<<" "<<j-u<<endl;
                                cout<<i<<" "<<j+u<<endl;
                                return;
                            }
                            k--;
                        }
                    }
                }
            }
        }
    }
    cout<<-1;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}