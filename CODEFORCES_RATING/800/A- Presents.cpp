#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-3-2021 , 2:15 AM
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<mp[i+1]<<" ";
    }
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
