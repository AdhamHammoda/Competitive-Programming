#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    ll ans=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans+=ceil((double)arr[i]/x);
        sum+=arr[i];
    }
    cout<<(sum/x) + (sum%x>0)<<" "<<ans<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}
