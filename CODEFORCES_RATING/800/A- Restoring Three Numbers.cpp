#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll arr[200005];
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll mx=max({a,b,c,d});
    if(mx!=a)cout<<mx-a<<" ";
    if(mx!=b)cout<<mx-b<<" ";
    if(mx!=c)cout<<mx-c<<" ";
    if(mx!=d)cout<<mx-d<<" ";
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}