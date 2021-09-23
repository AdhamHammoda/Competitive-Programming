#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
ll adj[30][30];
void test_case()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>adj[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        bool wek=true;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(adj[i][j] && adj[i][k] && adj[j][k])
                {
                    wek=false;
                }
            }
        }
        if(wek)cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>n)
    {
        if(n==-1)return 0;
        test_case();
    }
}
