#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<pair<pair<ll,ll>,pair<ll,ll>>>rect;
    set<pair<pair<ll,ll>,ll>>circ;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="rectangle")
        {
            ll a,b,c,d;
            cin>>a>>b>>c>>d;
            rect.insert({{a,b},{c,d}});
        }
        else
        {
            ll a,b,r;
            cin>>a>>b>>r;
            circ.insert({{a,b},r});
        }
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll c=0;
        ll a,b;
        cin>>a>>b;
        for(auto x:rect)
        {
            if(a>=x.first.first && a<=x.second.first
            && b>=x.first.second && b<=x.second.second)
            c++;
        }
        for(auto x:circ)
        {
            if((a-x.first.first)*(a-x.first.first)
            +(b-x.first.second)*(b-x.first.second)
            <=x.second*x.second)
            c++;
        }
        cout<<c<<endl;
    }
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
