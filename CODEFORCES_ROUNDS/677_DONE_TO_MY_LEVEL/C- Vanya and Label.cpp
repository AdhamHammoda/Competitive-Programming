#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
string s="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_";
map<ll,ll>m;
map<char,ll>pos;
const ll mod=1e9+7;
void test_case()
{
    string r;
    cin>>r;
    ll pr=1;
    for(auto x:r)
    {
        pr = (pr * m[pos[x]])%mod;
    }
    cout<<pr;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            m[(i&j)]++;
        }
    }
    for(int i=0;i<s.size();i++)pos[s[i]]=i;
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}