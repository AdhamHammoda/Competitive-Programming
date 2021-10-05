#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>m1,m2;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        m1[v[i].first]++,m2[v[i].second]++;
    }
    for(int i=0;i<n;i++)
    {
        ll ans1=n-1,ans2=n-1;
        ans2-=m1[v[i].second];
        ans1+=m1[v[i].second];
        cout<<ans1<<" "<<ans2<<endl;
    }
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
