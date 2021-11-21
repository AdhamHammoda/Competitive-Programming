#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll arr[m]={0};
    for(int i=0;i<m;i++)cin>>arr[i];
    ll a=1;
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        if(arr[i]<a)ans+=(n-a+arr[i]);
        else ans+=abs(arr[i]-a);
        a=arr[i];
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
