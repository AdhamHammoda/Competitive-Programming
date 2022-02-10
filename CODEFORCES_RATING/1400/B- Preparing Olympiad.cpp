#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll all=0;
    for(int i=0;i<(1LL<<n);i++)
    {
        ll mx=0,mn=1e18;
        ll sum=0,c=0;
        for(int j=0;j<n;j++)
        {
            if((i&(1LL<<j)))
            {
                sum+=arr[j],c++;
                mn=min(mn,arr[j]);
                mx=max(mx,arr[j]);
            }
        }
        all+=(c>=2 && mx-mn>=x && sum<=r && sum>=l);
    }
    cout<<all;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}