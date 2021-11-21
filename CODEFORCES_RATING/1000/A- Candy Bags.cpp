#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-15-2021 , 9:50 pm
void test_case()
{
   ll n;
   cin>>n;
   ll fst=1,lst=n*n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n/2;j++)
       {
           cout<<fst++<<" ";
       }
       for(int j=1;j<=n/2;j++)
       {
           cout<<lst--<<" ";
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
