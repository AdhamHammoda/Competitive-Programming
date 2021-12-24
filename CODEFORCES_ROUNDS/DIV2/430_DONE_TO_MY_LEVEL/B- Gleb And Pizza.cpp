#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
void test_case()
{
   double r,d;
   cin>>r>>d;
   ll n;
   cin>>n;
   ll c=0;
   while(n--)
   {
       double x1,y1,r1;
       cin>>x1>>y1>>r1;
       double dist=sqrt(x1*x1+y1*y1);
       if(dist<=r && dist>=r-d && dist+r1<=r && dist-r1>=r-d)c++;
   }
   cout<<c;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}