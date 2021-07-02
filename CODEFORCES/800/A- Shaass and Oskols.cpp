#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 12:23 AM
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll k;
    cin>>k;
    while(k--)
    {
        ll x,y;
        cin>>x>>y;
        x--;
        ll tmp=arr[x];
        if(x-1>=0)
        {
            arr[x-1]+=y-1;
        }
        if(x+1<n)
        {
            arr[x+1]+=tmp-y;
        }
        arr[x]=0;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
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
