#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>freq;
    ll mn=1e18;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        mn=min(mn,a);
        freq[a]++;
    }
    cout<<n-freq[mn]<<endl;
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
