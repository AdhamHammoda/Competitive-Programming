#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
ll arr[N];
ll n,m;
ll great(ll med)
{
    ll sum=0,tot=0,cur=0;
    map<ll,ll> m;
    m[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>=med)cur+=m[sum],sum++;
        else sum--,cur-=m[sum];
        tot+=cur;
        m[sum]++;
    }
    return tot;
}
void test_case()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>arr[i];
    cout<<great(m)-great(m+1);
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
