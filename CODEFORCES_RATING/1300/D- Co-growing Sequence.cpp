#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n],arr2[n]={0};
    for(int i=0;i<n;i++)cin>>arr[i];
    arr2[0]=0;
    cout<<0<<" ";
    for(int i=1;i<n;i++)
    {
        arr2[i]=((arr[i-1]^arr2[i-1])|(arr[i]))^(arr[i]);
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
