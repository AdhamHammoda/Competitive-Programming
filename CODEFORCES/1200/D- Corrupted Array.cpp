#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    n+=2;
    ll arr[n];
    multiset<ll> ms;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        ms.insert(arr[i]);
    }
    sort(arr,arr+n);
    bool done=false;
    if(sum-arr[n-1]-arr[n-2]==arr[n-2])
    {
        for(int i=0;i<n-2;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    sum-=arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(sum-arr[i]==arr[n-1])
        {
            ms.erase(ms.find(arr[i]));
            ms.erase(ms.find(arr[n-1]));
            done=true;
            break;
        }
    }
    if(done)for(auto x:ms)cout<<x<<" ";
    else cout<<-1;
    cout<<endl;
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
