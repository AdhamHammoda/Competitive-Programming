#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
char grid[1000][1000];
void test_case()
{
    ll n;
    vector<ll>x;
    vector<ll>y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='*')
            {
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    if(x[0]==x[1])
    {
        if(x[0]+1<n)
        {
            grid[x[0]+1][y[0]]='*';
            grid[x[0]+1][y[1]]='*';
        }
        else
        {
            grid[x[0]-1][y[0]]='*';
            grid[x[0]-1][y[1]]='*';
        }
    }
    else if(y[0]==y[1])
    {
        if(y[0]+1<n)
        {
            grid[x[0]][y[0]+1]='*';
            grid[x[1]][y[0]+1]='*';
        }
        else
        {
            grid[x[0]][y[0]-1]='*';
            grid[x[1]][y[0]-1]='*';
        }
    }
    else
    {
        grid[x[0]][y[1]]='*';
        grid[x[1]][y[0]]='*';
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}