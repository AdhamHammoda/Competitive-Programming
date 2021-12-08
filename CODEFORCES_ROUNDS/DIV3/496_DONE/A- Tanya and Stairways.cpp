#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
        {
            if(arr[i]>=arr[i+1])v.push_back(arr[i]);
        }
        else v.push_back(arr[i]);
    }
    cout<<v.size()<<endl;
    for(auto x:v)cout<<x<<" ";
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
