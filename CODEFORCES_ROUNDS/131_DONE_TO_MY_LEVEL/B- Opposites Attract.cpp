#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll> po,ne;
    ll c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)po[arr[i]]++;
        else if(arr[i]<0)ne[arr[i]]++;
        else c++;
    }
    ll ans=c*(c-1)/2;
    for(auto x:po)ans+=(ne[-x.first]*x.second);
    cout<<ans;
}
int main()
{
    FIO
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}