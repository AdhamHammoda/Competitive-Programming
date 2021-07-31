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
int n;
cin>>n;
string s;
cin>>s;
map<string,int> m;
int mx=0;
for(int i=1;i<s.size();i++)
{
        string y;
        y.push_back(s[i-1]);
        y.push_back(s[i]);
            m[y]++;
 }
vector<pair<int,string>>v;
for(auto x:m)
{
   v.push_back({x.second,x.first});
}
sort(v.begin(),v.end());
cout<<v[v.size()-1].second;
}
                                            