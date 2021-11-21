#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 2:08 am
set<ll>s;
ll d;
void func(ll x)
{
    for(int i=x;i<=d;i+=x)
    {
        s.insert(i);
    }
}
void test_case()
{
    ll k,l,m,n;
    cin>>k>>l>>m>>n>>d;
    func(k);
    func(l);
    func(m);
    func(n);
    cout<<s.size();
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
