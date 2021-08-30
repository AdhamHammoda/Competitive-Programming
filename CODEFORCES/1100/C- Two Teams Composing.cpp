#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>freq;
    ll mx=0;
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        mx=max(mx,freq[arr[i]]);
        s.insert(arr[i]);
    }
    cout<<max(min(mx,(ll)s.size()-1),min(mx-1,(ll)s.size()))<<endl;
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
