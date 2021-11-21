#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll ans= abs(a-c)+abs(d-b);
    if(a==c && c==e && f>min(b,d) && f<max(b,d))ans+=2;
    if(b==d && d==f && e>min(c,a) && e<max(c,a))ans+=2;
    cout<<ans<<endl;
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