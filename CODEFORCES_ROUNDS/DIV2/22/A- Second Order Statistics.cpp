#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    s.erase(*s.begin());
    if(!s.size())cout<<"NO";
    else cout<<*(s.begin());
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}