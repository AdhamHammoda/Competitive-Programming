#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<ll> s;
    for(int i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j+1]<arr[j] && s.find(j+1)!=s.end())
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
    if(is_sorted(arr,arr+n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
