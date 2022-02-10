#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,set<ll>>pos;
    ll a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i],pos[b[i]].insert(i);
    vector<pair<ll,ll>> ans;
    for(int i=0;i<n;i++)
    {
        if(b[i]!=a[i])
        {
            ll j=*pos[a[i]].lower_bound(i);
            while(b[i]!=a[i] && j)
            {
                ans.push_back({j,j+1});
                pos[b[j]].erase(j);
                pos[b[j-1]].erase(j-1);
                swap(b[j],b[j-1]);
                pos[b[j]].insert(j);
                pos[b[j-1]].insert(j-1);
                j--;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x.first<<" "<<x.second<<endl;
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