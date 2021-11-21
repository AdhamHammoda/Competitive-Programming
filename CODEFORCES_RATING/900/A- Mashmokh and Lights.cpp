#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-9-2021 , 4:09 am
ll vis[200];
void test_case()
{
   ll n,m;
   cin>>n>>m;
   ll arr[m]={0};
   for(int i=0;i<m;i++)
   {
       cin>>arr[i];
       for(int j=arr[i];j<=n;j++)
       {
           if(vis[j]>0)break;
           vis[j]=arr[i];
       }
   }
   for(int i=1;i<=n;i++)cout<<vis[i]<<" ";

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
