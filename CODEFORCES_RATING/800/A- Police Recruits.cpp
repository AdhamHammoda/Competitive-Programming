#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 5:35 AM
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    ll un=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=-1)sum+=arr[i];
        else
        {
            if(sum)sum--;
            else un++;
        }
    }
    cout<<un;
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
