#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    map<ll,pair<ll,ll>>m;
    ll arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            m[arr[i][j]]={i,j};
        }
    }
    long double ans=0.0;
    for(int i=2;i<=9;i++)
    {
        ans+=hypot(m[i].first-m[i-1].first,m[i].second-m[i-1].second);
    }
    cout<<fixed<<setprecision(10)<<ans;
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
