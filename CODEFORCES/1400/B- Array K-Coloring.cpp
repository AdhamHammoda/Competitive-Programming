#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll arr[5005];
map<ll,vector<ll>>v;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        v[arr[i]].push_back(i);
        ll sz=v[arr[i]].size();
        mx=max({mx,sz});
    }
    if(mx>k)
    {
        cout<<"NO"<<endl;
        return;
    }
    int j=0;
    int i=1;
    for(auto x:v)
    {
        for(auto y:x.second)
        {
            arr[y]=i;
            i%=k;
            i++;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}