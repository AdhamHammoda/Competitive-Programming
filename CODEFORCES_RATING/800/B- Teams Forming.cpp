#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
char grid[1000][1000];
void test_case()
{
    ll n;
    cin>>n;
    multiset<ll> ms;
    ll a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(ms.find(a)==ms.end())
        {
            ms.insert(a);
        }
        else ms.erase(a);
    }
    vector<ll> v;
    for(auto x:ms)v.push_back(x);
    ll sum=0;
    for(int i=1;i<v.size();i+=2)
    {
        sum+=v[i]-v[i-1];
    }
    cout<<sum;
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}