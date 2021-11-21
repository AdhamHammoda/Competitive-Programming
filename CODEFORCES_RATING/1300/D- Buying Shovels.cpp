#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll ans=n;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if((n/i)<=k)ans=min(ans,i);
            if(i<=k)ans=min(ans,n/i);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
