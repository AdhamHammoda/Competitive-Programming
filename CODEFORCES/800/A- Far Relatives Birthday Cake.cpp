#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , combinatorics
/// 7-6-2021 , 7:32 pm
void test_case()
{
   ll n;
   cin>>n;
   char grid[n][n];
   ll row[n]={0};
   ll column[n]={0};
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
