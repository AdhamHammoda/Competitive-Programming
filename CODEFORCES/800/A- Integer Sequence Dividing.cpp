#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
   ll n;
   cin>>n;
   if(n%4==0 || n%4==3)
   {
       cout<<0;
   }
   else cout<<1;
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}