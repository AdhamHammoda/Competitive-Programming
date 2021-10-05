#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m,d;
    cin>>n>>m>>d;
    ll arr[n][m];
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    ll ans1=1e18,ans2=0,ans3=1e18;
    ans2=v[v.size()/2];
    if(v.size()>=2)ans3=min(ans3,v[v.size()/2 + 1]);
    if(v.size()>=4)ans1=min(ans1,v[v.size()/2 - 1]);
    ll mans1=0,mans2=0,mans3=0;
    bool can=true;
    bool can1=true;
    bool can2=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ll diff1=abs(arr[i][j]-ans1);
            ll diff2=abs(arr[i][j]-ans2);
            ll diff3=abs(arr[i][j]-ans3);
            if(diff1%d)can=false;
            if(diff2%d)can1=false;
            if(diff3%d)can2=false;
            mans1+=abs(diff1/d);
            mans2+=abs(diff2/d);
            mans3+=abs(diff3/d);
        }
    }
    ll ans=1e18;
    if(can)ans=min(mans1,ans);
    if(can1)ans=min(mans2,ans);
    if(can2)ans=min(mans3,ans);
    if(ans>1e15)cout<<-1;
    else cout<<ans;
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
