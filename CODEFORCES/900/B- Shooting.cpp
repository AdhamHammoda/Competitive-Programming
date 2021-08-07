#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    multiset<pair<ll,ll>>ms;
    ll sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        ms.insert({-a,i+1});
    }
    vector<ll> ans;
    for(auto x:ms)
    {
        sum+=c*x.first*-1+1;
        c++;
        ans.push_back(x.second);
    }
    cout<<sum<<endl;
    for(auto x:ans)cout<<x<<" ";
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
