#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[m+1];
    for(int i=0;i<m+1;i++)
    {
        cin>>arr[i];
    }
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        ans+=(__builtin_popcount(arr[i] ^ arr[m])<=k);
    }
    cout<<ans;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
