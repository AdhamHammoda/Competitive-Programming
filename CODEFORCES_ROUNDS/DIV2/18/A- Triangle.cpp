#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll dist(pair<ll,ll> p1,pair<ll,ll>p2)
{
    return (p1.first-p2.first)*(p1.first-p2.first)+(p1.second-p2.second)*(p1.second-p2.second);
}
ll dx[]={0,0,-1,1};
ll dy[]={1,-1,0,0};
void test_case()
{
    vector<pair<ll,ll>>v(3);
    for(int i=0;i<3;i++)cin>>v[i].first>>v[i].second;
    auto p1=v[0],p2=v[1],p3=v[2];
    ll d1=dist(p1,p2);
    ll d2=dist(p1,p3);
    ll d3=dist(p2,p3);
    if(d1+d2==d3 || d1+d3==d2 || d2+d3==d1)cout<<"RIGHT",exit(0);
    sort(v.begin(),v.end());
    do
    {
        auto p1=v[0],p2=v[1],p3=v[2];
        for(int u=0;u<4;u++)
        {
            p1={v[0].first+dx[u],v[0].second+dy[u]};
            ll d1=dist(p1,p2);
            ll d2=dist(p1,p3);
            ll d3=dist(p2,p3);
            if(!d1 || !d2 || !d3)continue;
            if(d1+d2==d3 || d1+d3==d2 || d2+d3==d1)cout<<"ALMOST",exit(0);
        }
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<"NEITHER";
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