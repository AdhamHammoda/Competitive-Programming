#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n];
    multiset<ll> ms1,ms2;
    for(int i=0;i<n;i++)cin>>a[i],ms1.insert(a[i]);
    for(int i=0;i<n;i++)cin>>b[i],ms2.insert(b[i]);
    ll sum=0;
    while(k--)
    {
        sum+=max(*ms2.rbegin(),*ms1.begin());
        ms2.erase(ms2.find(*ms2.rbegin()));
         ms1.erase(ms1.find(*ms1.begin()));
    }
    for(auto x:ms1)sum+=x;
    cout<<sum<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
