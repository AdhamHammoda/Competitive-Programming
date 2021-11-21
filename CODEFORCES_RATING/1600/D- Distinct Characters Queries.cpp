#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
int const N=2e5+5;
string s;
ll tree[4*N];
void build(ll v,ll tl,ll tr)
{
    if(tl==tr)
    {
        tree[v]=1<<(s[tl]-'a');
        return;
    }
    else
    {
        ll mid=(tl+tr)/2;
        build(v*2,tl,mid);
        build(v*2+1,mid+1,tr);
        tree[v]=tree[v*2]|tree[v*2+1];
    }
}
ll getd(ll v,ll tl,ll tr,ll l,ll r) {
    if(l>r)return 0;
    if(l==tl && r==tr) return tree[v];
    ll tm=(tl+tr)/2;
    return getd(v*2,tl,tm,l,min(r,tm))|getd(v*2+1,tm+1,tr,max(l,tm+1),r);
}
void update(ll v, ll tl, ll tr, ll pos,char new_val) {
    if (tl==tr)
    {
        tree[v]=1<<(new_val-'a');
    }
    else
    {
        ll tm=(tl+tr)/2;
        if (pos<=tm)
            update(v*2,tl,tm,pos,new_val);
        else
            update(v*2+1,tm+1,tr,pos,new_val);
        tree[v]=tree[v*2]|tree[v*2+1];
    }
}
void test_case()
{
    cin>>s;
    build(1,0,s.size()-1);
    ll q;
    cin>>q;
    while(q--)
    {
        ll a;
        cin>>a;
        if(a==1)
        {
            ll b;
            char c;
            cin>>b>>c;
            update(1,0,s.size()-1,b-1,c);
        }
        else
        {
            ll c,d;
            cin>>c>>d;
            ll ans=getd(1,0,s.size()-1,c-1,d-1);
            cout<<__builtin_popcount(ans)<<endl;
        }
    }
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
