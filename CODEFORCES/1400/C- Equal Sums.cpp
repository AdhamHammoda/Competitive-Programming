#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N = 2e6;
vector<ll> v[N];
int main()
{
    //FIO
ll n;
cin>>n;
vector<ll> sum(n+1,0);
for(int i=1;i<=n;i++)
{
    ll k;
    cin>>k;
    for(int j=0;j<k;j++)
    {
        ll a;
        cin>>a;
        v[i].push_back(a);
        sum[i]+=a;
    }
}
  map<ll,vector<pair<ll,ll>>>m;
  set<ll> s;
  for(int i=1;i<=n;i++)
  {
      for(int j=0;j<v[i].size();j++)
      {
          m[sum[i]-v[i][j]+1e9].push_back({i,j+1});
          if(s.find(sum[i]-v[i][j])!=s.end() && i!=1)
          {
              cout<<"YES"<<endl;
              cout<<i<<" "<<j+1<<endl;
              cout<<m[sum[i]-v[i][j]+1e9][0].first<<" "<<m[sum[i]-v[i][j]+1e9][0].second;
              return 0;
          }
      }
      for(auto x:v[i])s.insert(sum[i]-x);
  }
  cout<<"NO"<<endl;
}