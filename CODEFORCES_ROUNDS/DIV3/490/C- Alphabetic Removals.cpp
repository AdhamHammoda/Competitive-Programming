#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=27;
vector<ll> pos[N];
void test_case()
{
    ll n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<s.size();i++)pos[s[i]-'a'].push_back(i);
    for(int i=0;i<27;i++)
    {
        for(auto x:pos[i])
        {
            if(!k)break;
            s[x]='4';
            k--;
        }
    }
    for(auto x:s)if(x!='4')cout<<x;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
