#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(int i=19;i<1e8;i+=9)
    {
        ll m=i,c=0;
        while(m>0)
        {
            c+=m%10;
            m/=10;
        }
        if(c==10)v.push_back(i);
    }
    cout<<v[n-1];
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
