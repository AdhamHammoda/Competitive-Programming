#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll sum=0;
    ll n;
    cin>>n;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        sum-=a;
        sum+=b;
        mx=max(mx,sum);
    }
    cout<<mx;
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
