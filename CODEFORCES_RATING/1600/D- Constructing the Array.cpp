#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
const ll N=2e5+5;
pair<ll,ll> arr[N];
ll solve(ll lef,ll rig)
{
    if(lef<=rig)
    {
        ll md=(lef+rig)/2;
        arr[md]={lef-rig,md};
        solve(lef,md-1);
        solve(md+1,rig);
    }
}
void test_case()
{
    ll n;
    cin>>n;
    solve(0,n-1);
    sort(arr,arr+n);
    vector<ll> ans(n);
    for(int i=0;i<n;i++)
    {
        ans[arr[i].second]=i+1;
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
