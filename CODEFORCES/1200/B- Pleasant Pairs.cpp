#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Number Theory
ll arr[200005];
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    ll c=0;
    for(int i=1;i<=n;i++)
    {
        ll ans=i/arr[i];
        ll ans2=arr[i]*(ans+1);
        for(int j=ans2-i;j<=n;j+=arr[i])
        {
            if(i+j==arr[i]*arr[j] && i<j)c++;
        }
    }
    cout<<c<<endl;
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