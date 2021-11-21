#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll freq[200];
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]%k]++;
    }
    ll c=0;
    for(int i=0;i<=k/2;i++)
    {
        if(!i || 2*i==k)
        {
            c+=freq[i]-freq[i]%2;
        }
        else
        {
            c+=2*min(freq[i],freq[k-i]);
        }
    }
    cout<<c;
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