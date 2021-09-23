#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
   ll x,y,x1,y1,x2,y2;
   cin>>x>>y>>x1>>y1>>x2>>y2;
   ll ans=0;
   if(y<y1)ans+=(y1-y)*(y1-y); /// down
   if(x<x1)ans+=(x1-x)*(x1-x); /// left
   if(x>x2)ans+=(x-x2)*(x-x2); /// right
   if(y>y2)ans+=(y-y2)*(y-y2); /// up
   cout<<fixed<<setprecision(10)<<sqrt(ans);
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
