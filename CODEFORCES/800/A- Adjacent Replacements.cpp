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
        if(arr[i]%2==0)arr[i]--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
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