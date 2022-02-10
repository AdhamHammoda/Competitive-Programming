#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    multiset<pair<ll,ll>>ms;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        ms.insert({-a,i+1});
    }
    ll mn=0;
    set<ll> s;
    for(auto x:ms)
    {
        if(!k)break;
        s.insert(x.second);
        mn=-x.first;
        k--;
    }
    cout<<mn<<endl;
    for(auto x:s)cout<<x<<" ";
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}