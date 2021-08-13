#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
vector<ll> v={1,2,3,4,5,6,7,8,9};
set<ll> sums[52];
void rec(ll idx,ll sum,ll num)
{
    if(idx>=9)
    {
        sums[sum].insert(num);
        return;
    }
    rec(idx+1,sum+v[idx],num*10+v[idx]);
    rec(idx+1,sum,num);
}
void test_case()
{
    ll n;
    cin>>n;
    if(sums[n].size())cout<<*sums[n].begin()<<endl;
    else cout<<-1<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    rec(0,0,0);
    while(t--)
    {
        test_case();
    }
}
