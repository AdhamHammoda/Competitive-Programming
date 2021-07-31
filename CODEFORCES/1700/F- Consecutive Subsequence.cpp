#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=2e5+5;
set<ll>s;
ll n;
vector<ll> dp(N,1);
vector<ll> par(N,-1);
vector<ll>v(N);
map<ll,vector<ll>>m;
int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>v[i];
    s.insert(v[i]);
    m[v[i]].push_back(i);
}
for(int idx=0;idx<n;idx++)
{
    if(s.find(v[idx]-1)!=s.end())
    {
        ll low=0,high=m[v[idx]-1].size()-1,mid=0,k=0;
        while(low<high)
        {
            mid=(high+low+1)/2;
            if(m[v[idx]-1][mid]>idx-1)
            {
                high=mid-1;
            }
            else
            {
                low=mid;
            }
        }
        k=m[v[idx]-1][low];
        if(k<idx)
        {
            par[idx]=k;
            dp[idx]+=dp[k];
        }
    }
}
ll mx=0;
ll j=0;
for(int i=0;i<n;i++)
{
    if(mx<dp[i])
    {
        mx=dp[i];
        j=i;
    }
}
vector<ll>y;
while(j!=-1)
{
    y.push_back(j+1);
    j=par[j];
}
reverse(y.begin(),y.end());
cout<<y.size()<<endl;
for(auto x:y)cout<<x<<" ";
}