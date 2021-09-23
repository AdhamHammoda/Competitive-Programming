#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
long double x,y;
ll n;
ll c=1;
void test_case()
{
    long double newx=x,newy=y;
    long double orx=x,ory=y;
    while(n--)
    {
        long double ans=sqrt(newx*newx+newy*newy);
        if(ans>2)
        {
            cout<<"Case "<<c<<": OUT"<<endl;
            return;
        }
        newx=x*x-y*y+orx;
        newy=2.0*x*y+ory;
        x=newx,y=newy;
    }
    cout<<"Case "<<c<<": IN"<<endl;
}
int main()
{
//    FIO
//    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>x>>y>>n)
    {
        test_case();
        c++;
    }
}
