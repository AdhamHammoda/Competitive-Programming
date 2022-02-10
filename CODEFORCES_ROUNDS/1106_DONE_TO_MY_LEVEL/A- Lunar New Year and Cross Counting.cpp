#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    char grid[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ll c=0;
            if(grid[i][j]=='X')
            {
                if(i-1>=0 && j-1>=0){if(grid[i-1][j-1]=='X')c++;}
                if(i-1>=0 && j+1<n){if(grid[i-1][j+1]=='X')c++;}
                if(i+1<n && j-1>=0){if(grid[i+1][j-1]=='X')c++;}
                if(i+1<n && j+1<n){if(grid[i+1][j+1]=='X')c++;}
                ans+=(c==4);
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