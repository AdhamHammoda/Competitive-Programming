#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 4:12 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll sum=0,c=0;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(sum+arr[i]>m)
        {
            c++;
            sum=arr[i];
        }
        else sum+=arr[i];
    }
    cout<<c+1;
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
