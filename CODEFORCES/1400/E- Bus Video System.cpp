#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    ll mx=-1e18;
    ll mn=1e18;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mx=max(mx,sum);
        mn=min(mn,sum);
    }
    if(mx>k || abs(mn)>k || mx+(mn<0)*abs(mn)>k)cout<<0;
    else if(mx>=0 && mn<=0)cout<<k-mx+1+mn;
    else if(mx>=0 && mn>=0)cout<<k-mx+1;
    else if(mx<=0 && mn<=0)cout<<k-abs(mn)+1;
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}

 