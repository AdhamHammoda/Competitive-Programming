#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    long double r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    long double dis=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    ll ans=ceil(dis/(2.0*r));
    cout<<ans;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
