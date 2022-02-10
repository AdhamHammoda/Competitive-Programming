#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    map<ll,set<ll>>m;
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum=0;
    ll mod=1073741824;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                ll v=i*j*k;
                if(m.count(v))
                {
                    ll sz=m[v].size();
                    sum=(sum%mod + sz%mod)%mod;
                    continue;
                }
                for(ll u=1;u*u<=v;u++)
                {
                    if(v%u==0)m[v].insert(u),m[v].insert(v/u);
                }
                ll sz=m[v].size();
                sum=(sum%mod + sz%mod)%mod;
            }
        }
    }
    cout<<sum;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}