#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=1;i<=n-1;i++)v.push_back({i,i+1});
    for(int i=1;i<=n;i++)
    {
        if(i+3<=n)v.push_back({i,i+3});
        for(int k=i+5;k<=n;k+=2)v.push_back({i,k});
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}