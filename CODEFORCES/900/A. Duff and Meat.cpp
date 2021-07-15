#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-15-2021 , 12:49 am
void test_case()
{
    ll n;
    cin>>n;
    ll a[n],p[n];
    ll mn=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>p[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        mn=min(mn,p[i]);
        ans+=mn*a[i];
    }
    cout<<ans;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
