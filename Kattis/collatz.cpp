#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,m;
void test_case()
{
    vector<ll> v1,v2;
    ll orn=n,orm=m;
    while(n!=1)
    {
        v1.push_back(n);
        n=(n%2?3*n+1:(n/2));
    }
    v1.push_back(1);
    while(m!=1)
    {
        v2.push_back(m);
        m=(m%2?3*m+1:(m/2));
    }
    v2.push_back(1);
    ll num=1;
    while(v1.size() && v2.size() && v2.back()==v1.back())
    {
        num=v1.back();
        v1.pop_back();
        v2.pop_back();
    }
    cout<<orn<<" needs "<<v1.size()<<" steps, ";
    cout<<orm<<" needs "<<v2.size()<<" steps, ";
    cout<<" they meet at "<<num<<endl;

}
int main()
{
//    FIO
//    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
//    t=1;
    while(cin>>n>>m)
    {
        if(!n && !m)return 0;
        test_case();
    }
}
