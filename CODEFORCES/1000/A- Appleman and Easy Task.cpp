#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 9:44 pm
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
    bool cant=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ll sum=0;
            if(i-1>=0)
            {
                sum+=(grid[i-1][j]=='o');
            }
            if(i+1<n)
            {
                sum+=(grid[i+1][j]=='o');
            }
            if(j-1>=0)
            {
                sum+=(grid[i][j-1]=='o');
            }
            if(j+1<n)
            {
                sum+=(grid[i][j+1]=='o');
            }
            cant+=sum%2;
        }
    }
    cant?cout<<"NO":cout<<"YES";
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
