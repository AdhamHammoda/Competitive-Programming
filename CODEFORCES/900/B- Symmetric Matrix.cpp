#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    bool ok=0;
    for(int i=0;i<n;i++)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ok+=(b==c);
    }
    ok && m%2==0?cout<<"YES"<<endl:cout<<"NO"<<endl;
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
