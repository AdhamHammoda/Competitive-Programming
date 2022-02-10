#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    vector<pair<ll,vector<ll>>>v;
    for(int i=0;i<n;i++)
    {
        ll x,y,z,c;
        cin>>x>>y>>z>>c;
        v.push_back({c,{x,y,z}});
    }
    ll ans=1e18,ind=0;
    for(int i=0;i<n;i++)
    {
        bool can=true;
        for(int j=0;j<n;j++)
        {
            if(j==i)continue;
            ll x1,y1,z1,x2,y2,z2;
            auto v1=v[i].second;
            auto v2=v[j].second;
            x1=v1[0],x2=v2[0],y1=v1[1],y2=v2[1],z1=v1[2],z2=v2[2];
            if(x1<x2 && y1<y2 && z1<z2)can=false;
        }
        if(can && ans>v[i].first)ans=v[i].first,ind=i+1;
    }
    cout<<ind;
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