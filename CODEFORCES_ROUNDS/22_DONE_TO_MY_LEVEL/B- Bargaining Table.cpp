#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
char grid[30][30];
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
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int k=i;k<=n;k++)
            {
                for(int w=j;w<=m;w++)
                {
                    bool can=true;
                    for(int u=i;u<=k;u++)
                    {
                        for(int y=j;y<=w;y++)
                        {
                            if(grid[u][y]=='1')
                            {
                                can=false;
                                break;
                            }
                        }
                    }
                    if(can)ans=max(ans,(ll)2*(w-j+1+k-i+1));
                }
            }
        }
    }
    cout<<ans;

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