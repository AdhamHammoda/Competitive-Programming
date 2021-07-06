#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-5-2021 , 5:58 am
void test_case()
{
    ll n=4;
    char grid[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pair<ll,ll> up = {i-1,j};
            pair<ll,ll> right = {i,j+1};
            pair<ll,ll> upright = {i-1,j+1};
            ll sum1=0,sum2=0;
            if(i-1>=0 && j+1<n)
            {
                sum1+=(grid[up.first][up.second]=='#');
                sum1+=(grid[right.first][right.second]=='#');
                sum1+=(grid[upright.first][upright.second]=='#');
                sum1+=(grid[i][j]=='#');
                sum2+=(grid[up.first][up.second]=='.');
                sum2+=(grid[right.first][right.second]=='.');
                sum2+=(grid[upright.first][upright.second]=='.');
                sum2+=(grid[i][j]=='.');
                if(sum1!=2 || sum2!=2)
                {
                    cout<<"YES";
                    return;
                }
            }
        }
    }
    cout<<"NO";
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
