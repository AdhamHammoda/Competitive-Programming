#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    multiset<ll> ms;
    map<ll,ll>freq;
    for(int i=0;i<n;i++)cin>>arr[i],ms.insert(arr[i]),freq[arr[i]]++;
    ll c=0;
    for(int i=0;i<n;i++)
    {
        bool can=false;
        for(int j=0;j<64;j++)
        {
            if(ms.find((1LL<<j)-arr[i])!=ms.end())
            {
                can+=((1LL<<j)-arr[i]!=arr[i]);
                can+=((1LL<<j)-arr[i]==arr[i] && freq[arr[i]]>1);
                if(can)break;
            }
        }
        if(!can)c++,ms.erase(ms.find(arr[i])),freq[arr[i]]--;
    }
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
