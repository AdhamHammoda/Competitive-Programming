#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-26-2021 , 11:53 am
ll binpow(ll a,ll b)
{
    if(!b)return 1;
    ll ans=binpow(a,b/2);
    if(b%2)return ans*ans*a;
    else return ans*ans;
}
void test_case()
{
    ll n,k;
    cin>>n>>k;
    multiset<ll>ms;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a<0 && k)
        {
            a*=-1;
            k--;
        }
        ms.insert(a);
    }
    if(k)
    {
        ll a=*ms.begin();
        a=binpow(-1,k)*a;
        ms.erase(ms.find(*ms.begin()));
        ms.insert(a);
    }
    ll sum=0;
    for(auto x:ms)sum+=x;
    cout<<sum;
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
