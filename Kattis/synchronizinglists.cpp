#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
void test_case()
{
    ll arr[n];
    map<ll,ll>m;
    map<ll,ll>m2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]=i;
    }
    ll arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    sort(arr,arr+n);
    sort(arr2,arr2+n);
    set<pair<ll,ll>>s;
    for(int i=0;i<n;i++)
    {
        m2[arr2[i]]=m[arr[i]];
        s.insert({m[arr[i]],arr2[i]});
    }
    for(auto x:s)cout<<x.second<<endl;
    cout<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>n)
    {
        if(!n)break;
        test_case();
    }
}
