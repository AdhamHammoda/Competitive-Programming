#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
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
    ll mn=1e18;
    for(int i=0;i<n;i++)
    {
        ll c=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)continue;
            c+=abs(arr[i]-arr[j])%2;
        }
        mn=min(mn,c);
    }
    cout<<mn;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}