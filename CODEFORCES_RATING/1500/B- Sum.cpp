#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return ans*ans*a;
    else return ans*ans;
}
void test_case()
{
    ll n,m;
    cin>>n>>m;
    string a,b;
    a=to_string(n);
    b=to_string(m);
    ll base=0;
    for(int i=0;i<a.size();i++)base=max(base,(ll)a[i]-'0');
    for(int i=0;i<b.size();i++)base=max(base,(ll)b[i]-'0');
    base++;
    ll ans=0,c=0;
    while(n>0)ans+=(n%10)*binpow(base,c),c++,n/=10;
    c=0;
    while(m>0)ans+=(m%10)*binpow(base,c),c++,m/=10;
    c=0;
    while(ans>0)ans/=base,c++;
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}