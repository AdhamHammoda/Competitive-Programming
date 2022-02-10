#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    vector<pair<long double,ll>>v(n);
    long double pi=acos(-1.0);
    for(int i=0;i<n;i++)
    {
        long double x,y;
        cin>>x>>y;
        long double a=atan2(y,x);
        if(a<0)a+=2.0*pi;
        v[i]={a,i+1};
    }
    sort(v.begin(),v.end());
    ll pos1=0,pos2=0;
    long double mx=4e12;
    for(int i=1;i<n;i++)
    {
        if(mx>v[i].first-v[i-1].first)
        {
            mx=v[i].first-v[i-1].first;
            pos1=v[i].second;
            pos2=v[i-1].second;
        }
    }
    long double an=v.back().first-v[0].first;
    if(an>pi)an=2.0*pi-an;
    if(mx>an)
    {
        pos1=v.back().second;
        pos2=v[0].second;
    }
    cout<<pos1<<" "<<pos2;
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