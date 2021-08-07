#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    multiset<ll>s;
    ll x,y,z;
    cin>>x>>y>>z;
    s.insert(x);
    s.insert(y);
    s.insert(z);
    if(s.size()==1)cout<<"YES"<<endl<<x<<" "<<x<<" "<<x<<endl;
    else
    {
        ll ans=*s.begin();
        s.erase(s.find(ans));
        if(*s.begin()==*s.rbegin())cout<<"YES"<<endl<<ans<<" "<<ans<<" "<<*s.begin()<<endl;
        else cout<<"NO"<<endl;
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
