#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll arr[6];
    cin>>arr[0]>>arr[1];
    ll mod=1e9+7;
    arr[0]=(arr[0]%mod +mod)%mod;
    arr[1]=(arr[1]%mod +mod)%mod;
    for(int i=2;i<6;i++)
    {
        arr[i]=(arr[i-1]%mod - arr[i-2]%mod + mod)%mod;
    }
    ll k;
    cin>>k;
    cout<<arr[(k-1 + 6)%6];
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
