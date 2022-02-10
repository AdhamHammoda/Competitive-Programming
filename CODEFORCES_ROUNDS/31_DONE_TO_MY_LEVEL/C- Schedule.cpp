#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
const ll N=5005;
vector<ll> adj[N];
vector<ll> all[N];
void test_case()
{
    ll n;
    cin>>n;
    pair<ll,ll> arr[n];
    for(int i=0;i<n;i++)cin>>arr[i].first>>arr[i].second;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(max(arr[i].first,arr[j].first)<min(arr[i].second,arr[j].second))
            {
                adj[i].push_back(j),adj[j].push_back(i);
            }
        }
        all[adj[i].size()].push_back(i+1);
    }
    if(all[1].size()==2 && all[0].size()==n-2)
    {
        cout<<2<<endl<<all[1][0]<<" "<<all[1][1];
        return;
    }
    if(all[0].size()==n)
    {
        cout<<n<<endl;
        for(int i=1;i<=n;i++)cout<<i<<" ";
        return;
    }
    ll c=0,ind=0;
    ll sum1=0,sum2=0;
    for(int i=2;i<n;i++)
    {
        if(!all[i].size())continue;
        c++,ind=all[i][0]-1;
    }
    if(c==1 && adj[ind].size()==all[1].size())
    {
        cout<<1<<endl<<ind+1;
        return;
    }
    cout<<0;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}