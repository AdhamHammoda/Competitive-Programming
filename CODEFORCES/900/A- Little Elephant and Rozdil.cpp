#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-12-2021 , 4:30 pm
map<ll,ll>freq;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    set<pair<ll,ll>>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        s.insert({arr[i],i+1});
    }
    auto it=*s.begin();
    freq[it.first]>1?cout<<"Still Rozdil":cout<<it.second;
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
