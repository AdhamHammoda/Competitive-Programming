#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
char grid[105][105];
ll row[105],column[105];
void test_case()
{
   ll n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>grid[i][j];
           row[i]+=(grid[i][j]=='C');
           column[j]+=(grid[i][j]=='C');
       }
   }
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=row[i]*(row[i]-1)/2;
       sum+=column[i]*(column[i]-1)/2;
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