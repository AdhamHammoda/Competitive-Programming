#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
vector<ll>  rem[11];
multiset<ll> ms[11];
ll powers[18];
void test_case()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ll tmp=log10(arr[i])+1;
        rem[tmp].push_back(arr[i]%k);
        ms[tmp].insert(arr[i]);
    }
    for(int i=0;i<11;i++)sort(rem[i].begin(),rem[i].end());
    powers[0]=1;
    for(int i=1;i<18;i++)
    {
        powers[i]= (powers[i-1] * 10LL )%k;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<11;j++)
        {
            ll mod=(powers[j] * arr[i])%k;
            ll it1=upper_bound(rem[j].begin(),rem[j].end(),(k-mod)%k)-rem[j].begin();
            ll it2=lower_bound(rem[j].begin(),rem[j].end(),(k-mod)%k)-rem[j].begin();
            ans+=it1-it2;
            ans-=((ms[j].find(arr[i])!=ms[j].end() && (mod + arr[i]%k)%k==0));
        }
    }
    cout<<ans;
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
