#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-4-2021 , 2:05 am
ll freq[1005];
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mxfreq=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        mxfreq = max(mxfreq,freq[arr[i]]);
    }
    mxfreq>n/2 + n%2?cout<<"NO":cout<<"YES";
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
