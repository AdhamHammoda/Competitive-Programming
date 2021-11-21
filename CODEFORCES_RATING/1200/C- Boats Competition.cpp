#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll> freq;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    ll ans=0;
    for(int i=2;i<=3*n;i++)
    {
        ll c=0;
        for(int j=1;j<(i+1)/2;j++)
        {
            if(i-j>n)continue;
            c+=min(freq[j],freq[i-j]);
        }
        if(i%2==0)c+=freq[i/2]/2;
        ans=max(ans,c);
    }
    cout<<ans<<endl;
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
