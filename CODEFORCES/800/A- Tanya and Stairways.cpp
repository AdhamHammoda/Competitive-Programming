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
    for(int i =0 ;i < n;i++)
    {
        cin>>arr[i];
    }
    vector<ll> v;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<=arr[i])
        {
            v.push_back(arr[i]);
        }
    }
    v.push_back(arr[n-1]);
    cout<<v.size()<<endl;
    for(auto x:v)cout<<x<<" ";
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