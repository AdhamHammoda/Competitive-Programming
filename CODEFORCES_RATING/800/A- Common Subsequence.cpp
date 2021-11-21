#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i])!=s.end())
        {
            cout<<"YES"<<endl<<1<<" "<<arr[i]<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
//    FIO
    ll t;
//    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
