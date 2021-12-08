#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
map<ll,set<string>>all;
map<string,ll>freq;
void test_case()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        freq[s]--;
        all[freq[s]].insert(s);
    }
    for(auto x:(all.begin()->second))cout<<x<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
