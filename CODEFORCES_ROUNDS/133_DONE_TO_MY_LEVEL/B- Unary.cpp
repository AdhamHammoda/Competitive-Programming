#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll mod=1000003;
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return ((ans%mod * ans%mod) * a)%mod;
    else return (ans%mod * ans%mod);
}
void test_case()
{
    string s;
    cin>>s;
    map<char,string>m;
    m['>']="1000",m['<']="1001",m['+']="1010";
    m['-']="1011",m['.']="1100",m[',']="1101",
    m['[']="1110",m[']']="1111";
    string r="";
    for(auto x:s)
    {
        r+=m[x];
    }
    reverse(r.begin(),r.end());
    ll ans=0;
    for(int i=0;i<r.size();i++)
    {
        if(r[i]=='1')ans= (ans + binpow(2,i))%mod;
    }
    cout<<ans;
}
int main()
{
//    FIO
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