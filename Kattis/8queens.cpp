#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
char grid[8][8];
bool valid(ll r,ll c)
{
    for(int i=0;i<r;i++)
    {
        if(grid[i][c]=='*')
        {
            return false;
        }
    }
    for(int i=r+1;i<8;i++)
    {
        if(grid[i][c]=='*')
        {
            return false;
        }
    }
    for(int i=0;i<c;i++)
    {
        if(grid[r][i]=='*')
        {
            return false;
        }
    }
    for(int i=c+1;i<8;i++)
    {
        if(grid[r][i]=='*')
        {
            return false;
        }
    }
    for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--)
    {
        if(grid[i][j]=='*')
        {
            return false;
        }
    }
    for(int i=r+1,j=c+1;i<8 && j<8;i++,j++)
    {
        if(grid[i][j]=='*')
        {
            return false;
        }
    }
    for(int i=r-1,j=c+1;i>=0 && j<8;i--,j++)
    {
        if(grid[i][j]=='*')
        {
            return false;
        }
    }
    for(int i=r+1,j=c-1;i<8 && j>=0;i++,j--)
    {
        if(grid[i][j]=='*')
        {
            return false;
        }
    }
    return true;
}
void test_case()
{
    ll c=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(grid[i][j]=='*')
            {
                c++;
                if(!valid(i,j))
                {
                    cout<<"invalid";
                    return;
                }
            }
        }
    }
    cout<<(c==8?"valid":"invalid");
}
int main()
{
    FIO
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
