#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    ll mn=1e18,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(!i)
        {
            mn=min(arr[i],mn);
            mx=max(arr[i],mx);
        }
        sum+=arr[i]<mn;
        sum+=arr[i]>mx;
        mn=min(arr[i],mn);
        mx=max(arr[i],mx);
    }
    cout<<sum;
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