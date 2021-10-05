#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    multiset<pair<ll,ll>> ms;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        m[a]++;
    }
    for(auto x:m)ms.insert({x.second,x.first});
    while(ms.size()>=2)
    {
        auto p1=*ms.begin();
        auto p2=*ms.rbegin();
        if(p1.second==p2.second)break;
        ll num1=p1.second,freq1=p1.first,num2=p2.second,freq2=p2.first;
        ll ans=min(p1.first,p2.first);
        ms.erase({freq1,num1});
        ms.erase({freq2,num2});
        freq1--;
        freq2--;
        if(freq1)ms.insert({freq1,num1});
        if(freq2)ms.insert({freq2,num2});
    }
    if(ms.size())
    {
        auto x=*ms.begin();
        cout<<x.first<<endl;
    }
    else cout<<0<<endl;
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
