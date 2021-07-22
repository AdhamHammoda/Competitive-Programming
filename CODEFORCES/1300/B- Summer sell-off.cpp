#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Greedy
/// 7-20-2021 , 5:39 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    multiset<pair<ll,pair<ll,ll>>> ms;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        ms.insert({-(min(2*a,b)-min(a,b)),{a,b}});
    }
    for(auto x:ms)
    {
        ll a,b;
        a=x.second.first;
        b=x.second.second;
        if(m && -x.first>0)
        {
            sum+=min(2*a,b);
            m--;
        }
        else
        {
            sum+=min(a,b);
        }
    }
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
