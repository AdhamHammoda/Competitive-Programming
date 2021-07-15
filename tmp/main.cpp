#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-15-2021 , 2:50 am
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    set<ll>ans;
    for(int i=n-1;i>=0;i--)
    {
        if(k>=v[i].first)
        {
            k-=v[i].first;
            ans.insert(v[i].second+1);
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(k>=v[i].first)
        {
            k-=v[i].first;
            ans.insert(v[i].second+1);
        }
        else break;
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x<<" ";
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
