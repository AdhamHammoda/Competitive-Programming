#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-4-2021 , 4:07 am
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[2*n +1];
    for(int i=0;i<2*n +1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<2*n;i++)
    {
        if(i%2 && k && arr[i]-1>arr[i-1] && arr[i]-1>arr[i+1])
        {
            arr[i]--;
            k--;
        }
    }
    for(int i=0;i<2*n +1;i++)cout<<arr[i]<<" ";
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
