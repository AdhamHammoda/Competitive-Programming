#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=1e5+5;
vector<ll> v;
ll n,d,l;
void test_case()
{
    cin>>n>>d>>l;
    v.push_back(d);
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)v.push_back(l-v[i]),v[i]=l;
        else v.push_back(1-v[i]),v[i]=1;
    }
    v[n-1]-=v[n];
    v.pop_back();
    for(auto x:v)if(x<1 || x>l)cout<<-1,exit(0);
    for(auto x:v)cout<<x<<" ";
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}