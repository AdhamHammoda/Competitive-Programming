#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=1e5+5, M=17+5, MOD=998244353, OO=0x3f3f3f3f;
long double const ESP=1e-11;

int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
ll n,k;
cin>>n>>k;
vector<ll> v(n);
for(auto &x:v)
{
    cin>>x;
}
sort(v.begin(),v.end());
int ans=0;
if(!k)
{
    ans=v[0]-1;
}
else
{
    ans=v[k-1];
}
int c=0;
for (int i=0;i<n;i++)
{
    if (v[i]<=ans){c++;}
}
if (c!=k || !(ans>=1 && ans<=1e9))
{
    cout<<-1;
    return 0;
}
cout<<ans;
return 0;
}
 