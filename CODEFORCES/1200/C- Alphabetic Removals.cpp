#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N=1e6;
map<char,vector<int>>m;
ll binpow(ll a,ll b)
{
    if(b==0)return 1;
    ll x=binpow(a,b/2);
    if(b%2)return x*x*a;
    else return x*x;
}
int main()
{
    FIO
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        m[s[i]].push_back(i);
    }
   for(auto x:m)
   {
       for(auto z:x.second)
       {
           s[z]='0';
           k--;
           if(!k)
           {
               for(auto u:s)if(u!='0')cout<<u;
               return 0;
           }
       }
   }
}