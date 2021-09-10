#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
struct Rect
{
	ll x1,y1,x2,y2;
	ll area(){return (y2-y1)*(x2-x1);}
};
ll mx(ll a, ll b){ return a<=b? b : a;}
ll mn(ll a, ll b){ return a<=b? a : b;}
ll intersect(Rect p, Rect q)
{
	ll xOverlap = mx(0,mn(p.x2,q.x2)-mx(p.x1,q.x1));
	ll yOverlap = mx(0,mn(p.y2,q.y2)-mx(p.y1,q.y1));
	return xOverlap*yOverlap;
}
void test_case()
{
    Rect a,b,c,d,e;
	cin>>a.x1>>a.y1>>a.x2>>a.y2;
	cin>>b.x1>>b.y1>>b.x2>>b.y2;
	cin>>c.x1>>c.y1>>c.x2>>c.y2;
	d.x1=mx(a.x1,b.x1);
	d.y1=mx(a.y1,b.y1);
	d.x2=mn(a.x2,b.x2);
	d.y2=mn(a.y2,b.y2);
	e.x1=mx(a.x1,c.x1);
	e.y1=mx(a.y1,c.y1);
	e.x2=mn(a.x2,c.x2);
	e.y2=mn(a.y2,c.y2);
    a.area() - intersect(a,b) - intersect(a,c) + intersect(d,e) > 0? cout<<"YES":cout<<"NO";
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.out","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
