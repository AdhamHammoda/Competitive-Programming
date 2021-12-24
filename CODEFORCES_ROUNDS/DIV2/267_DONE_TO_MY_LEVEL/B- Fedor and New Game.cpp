#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    ll fedor;
    cin>>fedor;
    ll c=0;
    for(int i=0;i<m;i++)
    {
        c+=(__builtin_popcount(fedor^arr[i])<=k);
    }
    cout<<c;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}