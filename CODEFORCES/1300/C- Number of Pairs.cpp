#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-26-2021 , 12:36 pm
void test_case()
{
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll it1=lower_bound(v.begin()+i+1,v.end(),x-v[i])-v.begin();
        ll it2=upper_bound(v.begin()+i+1,v.end(),y-v[i])-v.begin();
        sum+=it2-it1;
    }
    cout<<sum<<endl;
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
