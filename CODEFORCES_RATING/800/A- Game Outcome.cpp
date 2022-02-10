#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    ll c=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ll sr=arr[i][j];
            ll sc=arr[i][j];
            for(int k=i+1;k<=n;k++)sc+=arr[k][j];
            for(int k=i-1;k>=1;k--)sc+=arr[k][j];
            for(int k=j+1;k<=n;k++)sr+=arr[i][k];
            for(int k=j-1;k>=1;k--)sr+=arr[i][k];
            c+=(sc>sr);
        }
    }
    cout<<c;
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