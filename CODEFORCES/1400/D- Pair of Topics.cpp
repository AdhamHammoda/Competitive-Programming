#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll a[n],b[n],c[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)c[i]=a[i]-b[i];
    ll ans=0;
    sort(c,c+n);
    for(int i=0;i<n;i++)
    {
        if(c[i]>0)
        {
            ans+=i-(lower_bound(c,c+n,1-c[i])-c);
        }
    }
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
