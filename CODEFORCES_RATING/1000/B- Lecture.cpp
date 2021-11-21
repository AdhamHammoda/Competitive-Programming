#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        mp[a].size()<a.size()?cout<<mp[a]<<" ":cout<<a<<" ";
    }
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}