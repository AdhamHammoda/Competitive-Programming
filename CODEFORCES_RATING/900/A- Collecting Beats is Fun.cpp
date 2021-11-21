#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-18-2021 , 6:27 pm
void test_case()
{
    ll k;
    cin>>k;
    k*=2;
    ll n=4;
    char grid[n][n];
    ll freq[10]={0};
    bool cant=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]!='.')
            {
                ll a=grid[i][j]-'0';
                freq[a]++;
                if(freq[a]>k)
                {
                    cant=true;
                }
            }
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
