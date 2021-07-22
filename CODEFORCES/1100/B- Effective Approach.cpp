#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 8:35 pm
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]=i;
    }
    ll q;
    cin>>q;
    ll v=0,p=0;
    while(q--)
    {
        ll a;
        cin>>a;
        ll ind=m[a];
        v+=ind+1;
        p+=n-ind;
    }
    cout<<v<<" "<<p<<endl;
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
