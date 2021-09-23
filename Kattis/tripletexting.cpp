#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll sz=s.size()/3;
    map<string, ll> m;
    m[s.substr(0,sz)]++;
    m[s.substr(sz,sz)]++;
    m[s.substr(sz*2,sz)]++;
    for(auto x:m)if(x.second>=2)cout<<x.first;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
