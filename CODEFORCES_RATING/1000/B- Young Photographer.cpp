#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,x0;
    cin>>n>>x0;
    multiset<ll>r,l;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x>y)swap(x,y);
        l.insert(x);
        r.insert(y);
    }
    ll mxl=*l.rbegin();
    ll mnr=*r.begin();
    if(mxl>mnr)cout<<-1;
    else
    {
        ll mn=1e18;
        for(int i=mxl;i<=mnr;i++)mn=min(mn,abs(i-x0));
        cout<<mn;
    }

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