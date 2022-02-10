#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll mx=max({a,b,c,d});
    if(mx-a)cout<<mx-a<<" ";
    if(mx-b)cout<<mx-b<<" ";
    if(mx-c)cout<<mx-c<<" ";
    if(mx-d)cout<<mx-d<<" ";
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
