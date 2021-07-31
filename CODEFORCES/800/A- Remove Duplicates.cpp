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
ll n;
cin>>n;
vector<ll> v(n);
vector<ll>v2;
set<ll>s;
for(auto &x:v)
{
    cin>>x;
}
for(int i=n-1;i>=0;i--)
{
    if(s.find(v[i])==s.end())
    {
        s.insert(v[i]);
        v2.push_back(v[i]);
    }
}
reverse(v2.begin(),v2.end());
cout<<v2.size()<<endl;
for(auto x:v2)cout<<x<<" ";
}