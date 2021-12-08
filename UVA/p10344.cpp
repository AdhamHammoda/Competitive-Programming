#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
bool can=false;
ll arr[5];
void solve(ll idx,ll ans)
{
    if(idx==5)
    {
        can|=(ans==23);
        return;
    }
    solve(idx+1,ans * arr[idx]);
    solve(idx+1,ans + arr[idx]);
    solve(idx+1,ans - arr[idx]);
}
void test_case()
{
    can=false;
    for(int i=0;i<5;i++)cin>>arr[i],can=can | arr[i];
    if(!can)exit(0);
    sort(arr,arr+5);
    do
    {
        can=false;
        solve(1,arr[0]);
        if(can)
        {
            cout<<"Possible"<<endl;
            return;
        }
    }
    while(next_permutation(arr,arr+5));
    cout<<"Impossible"<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(true)
    {
        test_case();
    }
}
