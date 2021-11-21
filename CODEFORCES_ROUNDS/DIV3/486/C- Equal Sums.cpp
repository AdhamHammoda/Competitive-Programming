#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const ll N=2e5+7;
map<ll,pair<ll,ll>>m;
vector<ll> seq[N];
ll sums[N];
set<ll> ms;
void test_case()
{
    ll k;
    cin>>k;
    for(int j=1;j<=k;j++)
    {
        ll n;
        cin>>n;
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            ll a;
            cin>>a;
            seq[j].push_back(a);
            sum+=a;
        }
        sums[j]=sum;
    }
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<seq[i].size();j++)
        {
            if(ms.find(sums[i]-seq[i][j])!=ms.end())
            {
                cout<<"YES"<<endl;
                cout<<m[sums[i]-seq[i][j]].first<<" "<<m[sums[i]-seq[i][j]].second<<endl;
                cout<<i<<" "<<j+1;
                return;
            }
        }
        for(int j=0;j<seq[i].size();j++)
        {
            m[sums[i]-seq[i][j]]={i,j+1};
            ms.insert(sums[i]-seq[i][j]);
        }
    }
    cout<<"NO";
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
