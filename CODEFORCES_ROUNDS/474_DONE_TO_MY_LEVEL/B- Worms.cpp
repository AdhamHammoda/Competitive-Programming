#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll arr[N];
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
    ll m;
    cin>>m;
    while(m--)
    {
        ll x;
        cin>>x;
        ll ind=lower_bound(arr+1,arr+n,x)-arr;
        cout<<ind<<endl;
    }
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