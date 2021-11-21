#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll arr[100005], tmp[100005],n;
ll solve(ll diff)
{
    ll ans=0;
    for(int i=3;i<=n;i++)
    {
        if(tmp[i]-tmp[i-1]==diff)continue;
        if(tmp[i]+1 - tmp[i-1]==diff)tmp[i]++,ans++;
        else if(tmp[i]-1 - tmp[i-1]==diff)tmp[i]--,ans++;
        else return 1e18;
    }
    return ans;
}
void test_case()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    ll ans=1e18;
    for(int i=-1;i<=1;i++)
    {
        for(int j=-1;j<=1;j++)
        {
            for(int k=1;k<=n;k++)
            {
                tmp[k]=arr[k];
            }
            tmp[1]=arr[1]+i;
            tmp[2]=arr[2]+j;
            ans=min(ans,solve(tmp[2]-tmp[1]) +((i!=0) + (j!=0)));
        }
    }
    cout<<(ans==1e18?-1:ans);

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
