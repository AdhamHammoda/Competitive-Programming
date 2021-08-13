#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll arr[200][200];
ll factorial(ll n)
{
    return n?n*factorial(n-1):1;
}
void test_case()
{
   ll n;
   cin>>n;
   for(int i=0;i<200;i++)
   {
       for(int j=0;j<=i;j++)
       {
           if(j==i || !j)arr[i][j]=1;
           else arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
       }
   }
   ll f=factorial((n/2)-1);
   cout<<f*f*arr[n][n/2]/2;
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
