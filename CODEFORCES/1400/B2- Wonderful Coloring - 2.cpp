#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-27-2021 , 4:16 pm
ll freq[200005];
ll freq2[200005];
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    multiset<pair<ll,ll>>ms;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ms.insert({arr[i],i});
    }
    ll c=0;
    for(auto x:ms)
    {
        if(freq[x.first]<k)
        {
            freq[x.first]++;
            arr[x.second]=c+1;
            freq2[c+1]++;
            c++;
            c%=k;
        }
        else arr[x.second]=0;
    }
    ll mn=1e9;
    for(int i=1;i<=k;i++)
    {
        mn=min(freq2[i],mn);
    }
    for(int i=0;i<n;i++)
    {
        if(freq2[arr[i]]>mn)
        {
            freq2[arr[i]]--;
            arr[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        freq[i]=freq2[i]=0;
        cout<<arr[i]<<" ";
    }
    freq[n]=freq2[n]=0;
    cout<<endl;
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
