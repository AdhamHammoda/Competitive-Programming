#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c;
    cin>>a>>b>>c;
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    if(s.size()==1)cout<<0<<endl;
    else if(s.size()==2)cout<<max(0LL,2*(*s.rbegin()-*s.begin()-2))<<endl;
    else
    {
        ll mn=*s.begin();
        ll mx=*s.rbegin();
        s.erase(mn);
        s.erase(mx);
        mn++,mx--;
        ll ans=*s.begin();
        cout<<abs(ans-mx)+abs(ans-mn)+abs(mx-mn)<<endl;
    }
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
