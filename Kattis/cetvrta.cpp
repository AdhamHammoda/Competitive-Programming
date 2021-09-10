#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    map<ll,ll>m1;
    map<ll,ll>m2;
    for(int i=0;i<3;i++)
    {
        ll a,b;
        cin>>a>>b;
        m1[a]++;
        m2[b]++;
    }
    for(auto x:m1)if(x.second==1)cout<<x.first<<" ";
    for(auto x:m2)if(x.second==1)cout<<x.first<<" ";
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
