#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-15-2021 , 10:32 pm
void test_case()
{
    ll grid[3][3];
    ll state[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i][j]%2)
            {
                state[i][j]=!state[i][j];
                if(i-1>=0)
                {
                    state[i-1][j]=!state[i-1][j];
                }
                if(i+1<3)
                {
                    state[i+1][j]=!state[i+1][j];
                }
                if(j-1>=0)
                {
                    state[i][j-1]=!state[i][j-1];
                }
                if(j+1<3)
                {
                    state[i][j+1]=!state[i][j+1];
                }
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<state[i][j];
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
