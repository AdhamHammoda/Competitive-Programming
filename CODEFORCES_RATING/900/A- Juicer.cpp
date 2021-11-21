#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 12:27 AM
void test_case()
{
    ll n,b,d;
    cin>>n>>b>>d;
    ll arr[n];
    ll sum=0;
    ll c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>b)continue;
        sum+=arr[i];
        if(sum>d)
        {
            sum=0;
            c++;
        }
    }
    cout<<c;
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
