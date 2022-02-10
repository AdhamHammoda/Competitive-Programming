#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
string arr[]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM"
, "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
void test_case()
{
   ll n;
   cin>>n;
   ll sum=0;
   while(n--)
   {
       string s;
       cin>>s;
       ll a=0;
       if(s[0]>='0' && s[0]<='9')a=stoll(s),sum+=(a<18);
       else
       {
           for(auto x:arr)
           {
               if(x==s)
               {
                   sum++;
                   break;
               }
           }
       }
   }
   cout<<sum;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}