#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
vector<ll> v;
void rec(ll n)
{
    if(n>1e10)return;
    v.push_back(n);
    rec(10*n+4);
    rec(10*n+7);
}
void test_case()
{
    ll l,r;
    cin>>l>>r;
    rec(0);
    ll sum=0;
    sort(v.begin(),v.end());
    auto i=lower_bound(v.begin(),v.end(),l)-v.begin();
    sum+=v[i]*(min(v[i]-l,r-l)+1);
    for(;v[i]<=r;i++)sum+=v[i+1]*min(r-v[i],v[i+1]-v[i]);
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