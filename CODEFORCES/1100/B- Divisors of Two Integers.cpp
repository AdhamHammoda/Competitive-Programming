#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    multiset<ll> ms;
    for(int i=0;i<n;i++)cin>>arr[i],ms.insert(arr[i]);
    sort(arr,arr+n);
    for(int i=1;i*i<=arr[n-1];i++)
    {
        if(arr[n-1]%i==0)
        {
            if(i*i==arr[n-1])
            {
                ms.erase(ms.find(i));
                continue;
            }
            if(ms.find(arr[n-1]/i)!=ms.end())ms.erase(ms.find(arr[n-1]/i));
            if(ms.find(i)!=ms.end())ms.erase(ms.find(i));
        }
    }
    ll lc=1;
    for(auto x:ms)lc=lc*x/__gcd(lc,x);
    cout<<arr[n-1]<<" "<<lc<<endl;
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}