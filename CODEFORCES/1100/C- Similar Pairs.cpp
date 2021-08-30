#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    multiset<ll> ms;
    for(int i=0;i<n;i++)cin>>arr[i],ms.insert(arr[i]);
    sort(arr,arr+n);
    ll odd=0,ev=0;
    for(auto x:ms)odd+=x%2,ev+=x%2==0;
    if(odd%2!=ev%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(odd%2==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {

        if(ms.find(arr[i])!=ms.end() && ms.find(arr[i]+1)!=ms.end())
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
