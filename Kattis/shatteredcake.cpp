#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll w;
    cin>>w;
    ll n;
    cin>>n;
    ll sum=0;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        sum+=a*b;
    }
    cout<<sum/w;
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
