#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=1e5+6;
ll arr[N];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
    ll c=0;
    for(int i=1;i<=n-1;i++)c+=(arr[n]==2*arr[i]);
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}