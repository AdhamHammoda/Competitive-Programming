#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    map<ll,ll>nm;
    map<ll,ll>ans;
    ll arr[n];
    ll finalans=1e18;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        nm[arr[i]]++;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]>=k)
        {
            cout<<0;
            return;
        }
        ll tmp=arr[i],j=1;
        while(tmp>0)
        {
            tmp/=2;
            if(nm[tmp]<k)nm[tmp]++,ans[tmp]+=j;
            j++;
        }
    }
    for(int i=1;i<=200000;i++)
    {
        if(nm[i]==k)finalans=min(finalans,ans[i]);
    }
    cout<<finalans;
}
int main()
{
//    FIO
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
