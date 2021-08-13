#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,k;
ll dp[5005][5005];
ll arr[5005];
ll ind[5005];
ll solve(ll idx,ll rem)
{
    if(idx>=n || rem==k)return 0;
    ll &ans=dp[idx][rem];
    if(ans!=-1)return ans;
    ll op1=0,op2=0;
    op1=solve(idx+1,rem);
    op2=solve(ind[idx],rem+1)+ind[idx]-idx;
    return ans=max(op1,op2);
}
void test_case()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        ind[i]=n;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]>5)
            {
                ind[i]=j;
                break;
            }
        }
    }
    for(int i=0;i<5000;i++)for(int j=0;j<5000;j++)dp[i][j]=-1;
    cout<<solve(0,0);
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
