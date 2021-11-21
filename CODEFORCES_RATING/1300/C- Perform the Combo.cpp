#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
map<char,ll> mp;
map<char,vector<ll>>pos;
void test_case()
{
   ll n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   for(int i=0;i<n;i++)
   {
       mp[s[i]]++;
       pos[s[i]].push_back(i);
   }
   for(int i=0;i<m;i++)
   {
       ll a;
       cin>>a;
       for(char j='a';j<='z';j++)
       {
           ll it=lower_bound(pos[j].begin(),pos[j].end(),a)-pos[j].begin();
           mp[j]+=it;
       }
   }
   for(char i='a';i<='z';i++)cout<<mp[i]<<" ",mp[i]=0,pos[i].clear();
   cout<<endl;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
