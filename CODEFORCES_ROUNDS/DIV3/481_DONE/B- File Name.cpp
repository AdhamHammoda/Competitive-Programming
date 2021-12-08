#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll c=0;
   for(int i=0;i<n-2;i++)
   {
       c+=(s.substr(i,3)=="xxx");
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
