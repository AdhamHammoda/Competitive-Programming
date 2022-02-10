#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    bool cant=false;
    char grid[8][8];
    for(int i=0;i<8;i++)
    {
        ll b=0,w=0;
        for(int j=0;j<8;j++)
        {
            cin>>grid[i][j];
            w+=(grid[i][j]=='W');
            b+=(grid[i][j]=='B');
            if(j)cant+=(grid[i][j]==grid[i][j-1] && j!=7);
        }
        cant+=(w!=4 || b!=4);
    }
    cout<<(cant?"NO":"YES");
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