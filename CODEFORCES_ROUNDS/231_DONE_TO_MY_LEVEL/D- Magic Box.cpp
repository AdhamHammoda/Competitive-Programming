#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll x,y,z;
    cin>>x>>y>>z;
    ll x1,y1,z1;
    cin>>x1>>y1>>z1;
    ll a1,a2,a3,a4,a5,a6;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    cout<<a1*(y<0)+a2*(y>y1)+a3*(z<0)+a4*(z>z1)+a5*(x<0)+a6*(x>x1);
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
