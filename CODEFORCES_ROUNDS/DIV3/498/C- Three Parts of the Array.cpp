#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ptr1=0,ptr2=n-1;
    ll ans=0;
    ll sum1=arr[0],sum2=arr[n-1];
    while(ptr1<ptr2)
    {
        if(sum1<sum2)ptr1++,sum1+=arr[ptr1];
        else if(sum2<sum1)ptr2--,sum2+=arr[ptr2];
        else ans=max(ans,sum1),ptr1++,sum1+=arr[ptr1];
    }
    cout<<ans;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
