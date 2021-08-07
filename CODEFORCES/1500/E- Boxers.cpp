#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end() && arr[i]-1)
        {
            s.insert(arr[i]-1);
        }
        else if(s.find(arr[i])==s.end())
        {
            s.insert(arr[i]);
        }
        else if(s.find(arr[i]+1)==s.end())
        {
            s.insert(arr[i]+1);
        }
    }
    cout<<s.size();
}
int main()
{
//    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}