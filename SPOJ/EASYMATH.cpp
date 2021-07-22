#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , inclusion-exclusion
/// 7-22-2021 , 1:59 pm
vector<ll> v;
vector<vector<ll>> subsets;
vector<ll> subset;
void rec(ll idx)
{
    if(idx==5)
    {
        subsets.push_back(subset);
        return;
    }
    subset.push_back(v[idx]);
    rec(idx+1);
    subset.pop_back();

    rec(idx+1);
}
void test_case()
{
    ll n,m,a,d;
    cin>>n>>m>>a>>d;
    v.push_back(a);
    v.push_back(a+d);
    v.push_back(a+2*d);
    v.push_back(a+3*d);
    v.push_back(a+4*d);
    rec(0);
    ll sumn=0,summ=0;
    for(auto x:subsets)
    {
        if(!x.size())continue;
        ll lc=1,c=0;
        for(auto y:x)
        {
            lc=lc*y/__gcd(lc,y);
        }
        ll sz=x.size();
        if(sz%2)
        {
            summ+=m/lc;
            sumn+=(n-1)/lc;
        }
        else
        {
            summ-=m/lc;
            sumn-=(n-1)/lc;
        }
    }
    cout<<m-n+1-(summ-sumn)<<endl;
    v.clear();
    subsets.clear();
    subset.clear();
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
