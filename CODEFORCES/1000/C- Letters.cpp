#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=2e5+5;
int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
ll n,m;
cin>>n>>m;
vector<ll> v1(n);
vector<ll> v2(m);
for(auto &x:v1)cin>>x;
for(auto &x:v2)cin>>x;
for(int i=1;i<n;i++)
{
    v1[i]+=v1[i-1];
}
for(int i=0;i<m;i++)
{
ll indx=lower_bound(v1.begin(),v1.end(),v2[i])-v1.begin();
cout<<indx+1<<" ";
indx?cout<<v2[i]-v1[indx-1]<<endl:cout<<v2[i]<<endl;
}
}