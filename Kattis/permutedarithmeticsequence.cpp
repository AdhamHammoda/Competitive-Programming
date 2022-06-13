#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    set<ll> s;
    for(int i=1;i<n;i++)s.insert(arr[i]-arr[i-1]);
    if(s.size()==1)
    {
        cout<<"arithmetic"<<endl;
        return;
    }
    sort(arr,arr+n);
    s.clear();
    for(int i=1;i<n;i++)s.insert(arr[i]-arr[i-1]);
    if(s.size()==1)cout<<"permuted arithmetic"<<endl;
    else cout<<"non-arithmetic"<<endl;
}
int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    FIO
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
