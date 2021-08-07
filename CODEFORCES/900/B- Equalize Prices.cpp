#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll n,k;
ll arr[200];
void test_case()
{
    cin>>n>>k;
    ll sum=0,mn=1e9,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    (mx-mn>2*k)?cout<<-1<<endl:cout<<mn+k<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}