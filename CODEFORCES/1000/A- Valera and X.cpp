#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 8:34 pm
/// TEST!
char grid[305][305];
bool vis[305][305];
void test_case()
{
    ll n;
    cin>>n;
    set<char>s1;
    set<char>s2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        s1.insert(grid[i][i]);
        s1.insert(grid[i][n-i-1]);
        vis[i][i]=1;
        vis[i][n-i-1]=1;
    }
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(!vis[i][j])s2.insert(grid[i][j]);
        }
     }
     s1.size()==1 && s2.size()==1 && *s1.begin()!=*s2.begin()?cout<<"YES":cout<<"NO"<<endl;
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
