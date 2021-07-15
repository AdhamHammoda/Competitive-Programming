#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-13-2021 , 5:32 am
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mx=0;
    ll mn=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
    ll lstposmn=-1,lstposmx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mx && lstposmx==-1)
        {
            lstposmx=i;
        }
        if(arr[i]==mn)lstposmn=i;
    }
    cout<<n-lstposmn+lstposmx-1-(lstposmn<lstposmx);
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
