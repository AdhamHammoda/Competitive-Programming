#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
map<pair<ll,ll>,ll>m;
void test_case()
{
    ll n;
    cin>>n;
    ll a[n],b[n],c=0,ans=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==0 && b[i]!=0)continue;
        else if(!a[i] && !b[i])
        {
            c++;
        }
        else
        {
            ll g=__gcd(abs(a[i]),abs(b[i]));
            if(a[i]<0)b[i]=-b[i],a[i]=-a[i];
            m[{-b[i]/g,a[i]/g}]++;
            if(m[{-b[i]/g,a[i]/g}]>ans)ans=m[{-b[i]/g,a[i]/g}];
        }
    }
    cout<<ans+c;
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