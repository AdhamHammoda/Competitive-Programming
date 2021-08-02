#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<ll> s;
    ll mn=1e9,mx=-1e9;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
        mx=max(mx,a);
        mn=min(mn,a);
    }
    ll ans=mn*mx;
    for(ll i=2;i*i<=ans;i++)
    {
        if(ans%i==0)
        {
            if(s.find(ans/i)==s.end() || s.find(i)==s.end())
            {
                cout<<-1<<endl;
                return;
            }
        }
    }
    for(auto x:s)
    {
        if(ans%x)
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    //    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}