#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll a,b,c,d,e,h;
    cin>>a>>b>>c>>d>>e>>h;
    cout<<1-a<<" "<<1-b<<" "<<2-c<<" "<<2-d<<" "<<2-e<<" "<<8-h;
}
int main()
{
    FIO
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
