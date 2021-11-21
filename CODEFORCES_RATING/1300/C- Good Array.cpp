#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll arr[200007];
void test_case()
{
    ll n;
    cin>>n;
    ll sum=0;
    ll mx=0;
    multiset<ll> ms;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ms.insert(arr[i]);
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    ll c=0;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ms.erase(ms.find(arr[i]));
        if(ms.size()==1)
        {
            ms.insert(arr[i]);
            continue;
        }
        else if(ms.size()==2)
        {
            if(*ms.begin() == *ms.rbegin())
            {
                c++;
                v.push_back(i+1);
                ms.insert(arr[i]);
                continue;
            }
            else
            {
                ms.insert(arr[i]);
                continue;
            }
        }
        if(ms.find(sum-arr[i]-(*ms.rbegin()))!=ms.end())
        {
            c++;
            v.push_back(i+1);
        }
        ms.insert(arr[i]);
    }
    cout<<c<<endl;
    for(auto x:v)cout<<x<<" ";
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