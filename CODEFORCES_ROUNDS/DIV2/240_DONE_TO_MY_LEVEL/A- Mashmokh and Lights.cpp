#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    ll arr[m];
    map<ll,ll>ans;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        for(int j=arr[i];j<=n;j++)if(!ans[j])ans[j]=arr[i];
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
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