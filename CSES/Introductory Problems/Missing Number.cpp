#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<ll> s;
    for(int i=1;i<=n;i++)s.insert(i);
    for(int i=0;i<n-1;i++)
    {
        ll a;
        cin>>a;
        s.erase(a);
    }
    cout<<*s.begin();
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
