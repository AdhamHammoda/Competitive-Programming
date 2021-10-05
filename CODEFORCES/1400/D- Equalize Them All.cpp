#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    ll arr[n];
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        mx=max(mx,m[arr[i]]);
    }
    ll ind=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==mx)
        {
            ans=arr[i];
            ind=i;
            break;
        }
    }
    vector<pair<ll,pair<ll,ll>>>v;
    for(int i=ind-1;i>=0;i--)
    {
        v.push_back({1+(arr[i]>arr[i+1]),{i+1,i+2}});
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]!=ans && arr[i]==ans)v.push_back({1+(arr[i]<arr[i+1]),{i+2,i+1}});
        arr[i+1]=arr[i];
    }
    cout<<v.size()<<endl;
    for(auto x:v)cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
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
