#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll arr[105],lev[105];
void solve(ll lef,ll rig,ll dep)
{
    if(lef<=rig)
    {
        ll mx=0,idx=0;
        for(int i=lef;i<=rig;i++)
        {
            if(arr[i]>mx)
            {
                mx=arr[i];
                idx=i;
            }
        }
        lev[idx]=dep;
        solve(lef,idx-1,dep+1);
        solve(idx+1,rig,dep+1);
    }
}
void test_case()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    solve(1,n,0);
    for(int i=1;i<=n;i++)cout<<lev[i]<<" ";
    cout<<endl;
}
int main()
{
    FIO
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
