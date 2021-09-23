#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    for(int i=1;i<=n;i++)s.insert(i);
    while(k--)
    {
        ll a;
        cin>>a;
        s.erase(a);
    }
    if(s.size())cout<<*s.begin();
    else cout<<"too late";
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
