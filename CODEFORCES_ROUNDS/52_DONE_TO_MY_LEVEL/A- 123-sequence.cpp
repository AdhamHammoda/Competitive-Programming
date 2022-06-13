#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    cout<<min({n-m[1],n-m[2],n-m[3]});
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}