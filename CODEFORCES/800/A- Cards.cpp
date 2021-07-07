#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-6-2021 , 8:01 pm
set<ll> s[500];
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s[arr[i]].insert(i+1);
    }
    sort(arr,arr+n);
    for(int i=0;i<n/2;i++)
    {
        cout<<(*s[arr[i]].begin())<<" ";
        s[arr[i]].erase(s[arr[i]].begin());
        cout<<(*s[arr[n-i-1]].begin())<<endl;
        s[arr[n-i-1]].erase(s[arr[n-i-1]].begin());
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
