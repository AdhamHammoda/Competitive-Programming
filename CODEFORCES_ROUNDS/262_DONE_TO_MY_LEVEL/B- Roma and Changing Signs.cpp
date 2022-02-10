#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    multiset<ll>ms;
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x<0 && k)x=-x,k--;
        ms.insert(x);
    }
    while(k--)
    {
        auto x=*ms.begin();
        ms.erase(ms.find(x));
        ms.insert(-x);
    }
    ll sum=0;
    for(auto x:ms)sum+=x;
    cout<<sum;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}