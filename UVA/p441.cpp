#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
ll arr[40];
vector<ll> subset;
ll c=0;

void solve(ll idx,ll rem)
{
    if(!rem)
    {
        for(int i=0;i<6;i++)cout<<subset[i]<<(i==5?"":" ");
        cout<<endl;
        return;
    }
    if(idx>=n)return;
    subset.push_back(arr[idx]);
    solve(idx+1,rem-1);
    subset.pop_back();
    solve(idx+1,rem);
}
void test_case()
{
    if(c++)cout<<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    solve(0,6);
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(cin>>n)
    {
        if(!n)return 0;
        test_case();
    }
}
