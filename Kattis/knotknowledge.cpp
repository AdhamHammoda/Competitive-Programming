#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    set<ll> s;
    ll n;
    cin>>n;
    ll a;
    for(int i=0;i<n;i++)cin>>a,s.insert(a);
    ll b;
    for(int i=0;i<n-1;i++)cin>>b,s.erase(b);
    cout<<*s.begin();
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("b_basic.in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
