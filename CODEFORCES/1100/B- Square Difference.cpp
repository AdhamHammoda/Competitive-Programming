#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll a,b;
    cin>>a>>b;
    ll n=a-b,m=a+b;
    if(n>1)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
