#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=5005;
ll dp[N],par[N];
void test_case()
{
    ll n;
    cin>>n;
    ll H,W;
    cin>>H>>W;
    pair<ll,pair<ll,ll>> arr[n];
    ll ind=0;
    ll x,y;
    for(int i=0;i<n;i++)cin>>x>>y,arr[i]={x,{y,i+1}},par[i]=-1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)dp[i]=(arr[i].first>H && arr[i].second.first>W);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            auto p=arr[i],p2=arr[j];
            if(p.first>p2.first && p.second.first>p2.second.first
            && p.first>H && p.second.first>W)
            {
                if(dp[i]<dp[j]+1)dp[i]=dp[j]+1,par[i]=j;
            }
        }
    }
    ll ans=0,st=0;
    for(int i=0;i<n;i++)
    {
        if(ans<dp[i])ans=dp[i],st=i;
    }
    cout<<ans<<endl;
    deque<ll> v;
    while(st!=-1 && ans--)
    {
        v.push_front(arr[st].second.second);
        st=par[st];
    }
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