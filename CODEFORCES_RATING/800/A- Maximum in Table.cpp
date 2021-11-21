#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll arr[20][20];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        arr[1][i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    cout<<arr[n][n];
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
