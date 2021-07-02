#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 4:06 PM
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>freq;
    pair<ll,ll> arr[n];
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[i]={a,b};
        freq[b]++;
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=freq[arr[i].first];
    }
    cout<<sum;
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
