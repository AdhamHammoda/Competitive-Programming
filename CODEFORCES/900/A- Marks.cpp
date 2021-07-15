#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 9:27 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    char grid[n][m];
    ll column[m]={0};
    map<char,ll>mp;
    for(int i=0;i<10;i++)
    {
        mp['0'+i]=i;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            column[j]=max(column[j],mp[grid[i][j]]);
        }
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        bool best=false;
        for(int j=0;j<m;j++)
        {
            best+=(mp[grid[i][j]]==column[j]);
        }
        sum+=best;
    }
    cout<<sum;
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
