#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
const ll N=1e7+7;
vector<ll> ind[N],ans[N];
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ind[arr[i]].push_back(i+1);
    }
    for(ll i=1;i<N;i++)
    {
        for(ll j=i;j<N;j+=i)
        {
            for(ll k=0;ans[i].size()<2 && k<ind[j].size();k++)
            {
                ans[i].push_back(ind[j][k]);
            }
        }
    }
    ll mn=1e18;
    ll a=-1,b=-1;
    for(ll i=1;i<N;i++)
    {
        if(ans[i].size()<2)continue;
        if((arr[ans[i][0]-1]/i)*arr[ans[i][1]-1]<mn)
		{
			mn=(arr[ans[i][0]-1]/i)*arr[ans[i][1]-1];
			a=ans[i][0];
			b=ans[i][1];
		}
    }
    cout<<min(a,b)<<" "<<max(a,b);
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
