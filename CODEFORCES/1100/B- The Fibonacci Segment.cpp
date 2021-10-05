#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans=min(2LL,n),c=0;
    for(int i=2;i<n;i++)
    {
        if(arr[i]==arr[i-1]+arr[i-2])c++;
        else ans=max(ans,c+2),c=0;
    }
    ans=max(ans,c+2*(n>1));
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
