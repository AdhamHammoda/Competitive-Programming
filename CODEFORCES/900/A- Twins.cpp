#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Greedy
/// 7-3-2021 , 7:01
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mxsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mxsum+=arr[i];
    }
    sort(arr,arr+n);
    ll sum=0;
    ll j=0;
    for(int i=n-1;i>=0;i--)
    {
        mxsum-=arr[i];
        sum+=arr[i];
        if(sum>mxsum)
        {
            j=n-i;
            break;
        }
        j++;
    }
    cout<<j;
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
