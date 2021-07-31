#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll sum1 = arr[0] , sum2 = arr[n-1];
    ll ptr1 = 0 , ptr2 = n-1;
    ll mx=0;
    while(ptr1!=ptr2)
    {
        if(sum1<sum2)
        {
            ptr1++;
            sum1+=arr[ptr1];
        }
        else if(sum1>sum2)
        {
            ptr2--;
            sum2+=arr[ptr2];
        }
        else
        {
            mx=max({sum1,sum2});
            ptr1++;
            sum1+=arr[ptr1];
        }
    }
    cout<<mx;
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
 