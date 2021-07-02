#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 4:13
void test_case()
{
    ll n,h;
    cin>>n>>h;
    ll arr[n]={0};
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=2*(arr[i]>h);
        sum+=(arr[i]<=h);
    }
    cout<<sum;
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
