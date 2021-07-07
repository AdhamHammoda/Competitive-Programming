#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 8:29 pm
void test_case()
{
    ll n;
    cin>>n;
    char grid[n][n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2)
            {
                if(j%2)grid[i][j]='C';
                else grid[i][j]='.';
            }
            else
            {
                if(j%2)grid[i][j]='.';
                else grid[i][j]='C';
            }
            sum+=(grid[i][j]=='C');
        }
    }
    cout<<sum<<endl;
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
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
