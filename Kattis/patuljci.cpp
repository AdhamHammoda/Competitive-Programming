#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll arr[9];
vector<ll>v;
void solve(ll idx,ll k,ll sum)
{
    if(idx==9)
    {
        if(k==7 && sum==100)
        {
            for(auto x:v)cout<<x<<endl;
        }
        return;
    }
    v.push_back(arr[idx]);
    solve(idx+1,k+1,sum+arr[idx]);
    v.pop_back();
    solve(idx+1,k,sum);
}
void test_case()
{
    for(int i=0;i<9;i++)cin>>arr[i];
    solve(0,0,0);
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
