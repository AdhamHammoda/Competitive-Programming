#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2000;
void test_case()
{
    ll n;
   cin>>n;
   ll ans=ceil((long double)log2(n));
   cout<<ans<<endl;
   for(int i=0;i<ans;i++)
   {
       ll c=0;
       for(int j=0;j<n;j++)if(j&(1LL<<i))c++;
       cout<<c<<" ";
       for(int j=0;j<n;j++)if(j&(1LL<<i))cout<<j+1<<" ";
       cout<<endl;
   }
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}