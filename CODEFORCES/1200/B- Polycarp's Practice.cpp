#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr1[n];
    ll arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }
    sort(arr1,arr1+n);
    multiset<ll> ms;
    ll sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr1[n-i-1];
        ms.insert(arr1[n-i-1]);
    }
    int c=0;
    cout<<sum<<endl;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {

        if(ms.find(arr2[i])!=ms.end())
        {
            ms.erase(ms.find(arr2[i]));
            v.push_back(i+1);
        }
    }
    if(v.size()==1)
    {
        cout<<n;
    }
    else
    {
        cout<<v[1]-1<<" ";
        for(int i=2;i<v.size();i++)
        {
            cout<<v[i]-v[i-1]<<" ";
        }
        cout<<n-v[v.size()-1]+1;
    }
}

int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}