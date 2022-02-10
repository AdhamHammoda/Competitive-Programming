#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,b;
    cin>>n>>b;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll mx=b;
    for(int i=0;i<n;i++)
    {
        ll tmp=b/arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(mx<tmp*arr[j]+(b%arr[i]))mx=tmp*arr[j]+(b%arr[i]);
        }
    }
    cout<<mx;
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