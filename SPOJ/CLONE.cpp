#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,m;
void test_case()
{
    cin>>n>>m;
    if(!n && !m)exit(0);
    map<string,ll>freq;
    map<ll,ll>allfreq;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        freq[s]++;
    }
    for(auto x:freq)
    {
        allfreq[x.second]++;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<allfreq[i]<<endl;
    }
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(true)
    {
        test_case();
    }
}
