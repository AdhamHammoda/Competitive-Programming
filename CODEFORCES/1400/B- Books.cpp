#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ptr1=0,ptr2=0;
    ll ans=0,sum=0;
    while(ptr2<n)
    {
        sum+=arr[ptr2];
        if(sum<=m)ans=max(ans,ptr2-ptr1+1);
        while(sum>m)sum-=arr[ptr1++];
        ptr2++;
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
